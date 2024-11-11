/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:26:12 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/27 22:26:28 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty(void)
{
	char	*ptr;

	ptr = malloc(1);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != 0)
		i++;
	if (s1[i] == '\0')
		return (empty());
	j = ft_strlen(s1) - 1;
	while (j >= 0 && ft_strchr(set, s1[j]) != 0)
		j--;
	ptr = malloc(j - i + 2);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, j - i + 2);
	return (ptr);
}
// int	main()
// {
// 	char	*s1 = "aesalam cavaae";
// 	char	*set = "ae";
// 	char	*ptr = ft_strtrim(s1, set);
// 	printf("%s", ptr);
// 	return (0);
// }