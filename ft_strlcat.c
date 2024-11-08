/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:06:14 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/24 13:31:44 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lensrc;
	size_t	lendest;

	lensrc = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	if (dstsize == 0)
		return (lensrc);
	lendest = 0;
	while (dst[lendest] != '\0')
		lendest++;
	i = lendest;
	if (dstsize <= lendest)
		return (dstsize + lensrc);
	j = 0;
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lensrc + lendest);
}
// int	main(void)
// {
// 	char	s[20] = "hello ";
// // 	char	s2[] = "world";

// ft_strlcat(NULL, s, 0);
// // 	printf("%s", s);
// // 	printf("%d", d);
// // 	return (0);
// }