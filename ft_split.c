/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 21:05:16 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-10-28 21:05:16 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	**functionn(char	**ptr_to, size_t	j)
{
	while (j > 0)
		free(ptr_to[--j]);
	free(ptr_to);
	return (NULL);
}

static int	counting(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**final(char **ptr_to, int j)
{
	ptr_to[j] = NULL;
	return (ptr_to);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**ptr_to;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	ptr_to = malloc((counting(s, c) + 1) * sizeof(char *));
	if (ptr_to == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			ptr_to[j] = malloc(c_len(s + i, c) + 1);
			if (ptr_to[j] == NULL)
				return (functionn(ptr_to, j));
			ft_strlcpy(ptr_to[j++], s + i, c_len(s + i, c) + 1);
			i = c_len(s + i, c) + i;
		}
	}
	return (final(ptr_to, j));
}
// int	main()
// {
// 	char	*s = "salam \ncava \nbekher \nkidayr ";
// 	char	c = ' ';
// 	char	**ptr_to = ft_split(NULL, c);
// 	int	i = 0;
// 	while (ptr_to[i] != NULL)
// 	{
// 		printf("%s", ptr_to[i]);
// 		i++;
// 	}
// 	return (0);
// }