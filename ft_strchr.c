/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:37:59 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/25 21:29:06 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	m;
	size_t			i;

	m = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == m)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == m)
		return ((char *)(s + i));
	else
		return (0);
}
// int	main(void)
// {
// 	char	*l = "salam cava";
// 	int		i;
// 	char	s;
// 	char	*ptr;

// 	s = 'a';
// 	// ptr = ft_strchr(NULL, s);
// 	// i = 0;
// 	// while (ptr[i] != '\0')
// 	// {
// 	// 	write(1, &ptr[i], 1);
// 	// 	i++;
// 	// }
// 	ptr = strchr(NULL, s);
// 		i = 0;
// 	while (ptr[i] != '\0')
// 	{
// 		write(1, &ptr[i], 1);
// 		i++;
// 	}
// 	return (0);

// }
