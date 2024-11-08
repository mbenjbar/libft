/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:47:30 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/23 22:18:54 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*src2;
	size_t			i;

	ptr = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (ptr == src2 || len == 0)
		return (dst);
	if (ptr < src2)
	{
		i = 0;
		while (i < len)
		{
			ptr[i] = src2[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			ptr[i] = src2[i];
	}
	return (dst);
}
// int	main(void)
// {
// 	char	l[] = "salam cav";

// 	memmove(l, NULL, 0);
// 	// printf("%s", l);
// 	return (0);
// }