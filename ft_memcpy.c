/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:32:32 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/23 21:44:32 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*src2;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = src2[i];
		i++;
	}
	return (dst);
}
// int	main(void)
// {
// 	char	*l = "salam cav";
// 	char	l2[10];
// 	// char	*d;

// 	// d = ft_memcpy(l2, l, 5);
// 	// printf("%s", d);
// 	// return (0);
// 	ft_memcpy(l2, NULL, 0);
// 	memcpy(NULL, NULL, 0);
// }