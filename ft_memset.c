/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:45:15 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/25 22:24:03 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	a;
	size_t			i;

	ptr = (unsigned char *)b;
	a = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ptr[i] = a;
		i++;
	}
	return (ptr);
}
// int main()
// {
// 	// int a = 0;

// 	// ft_memset(&a,5,2);
// 	// ft_memset(&a,57,1);
// 	// printf("%d",a);
// }