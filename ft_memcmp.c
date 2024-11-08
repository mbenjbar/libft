/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:37:45 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/24 21:52:06 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*t1;
	const unsigned char	*t2;
	size_t				i;

	t1 = (const unsigned char *)s1;
	t2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return ((int)(t1[i] - t2[i]));
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	char	*l = "salam cav";
// 	char	*l2 = "salam cav";
// 	int		d;

// 	d = ft_memcmp(l, l2, 9);
// 	printf("%d", d);
// 	return (0);
// }
