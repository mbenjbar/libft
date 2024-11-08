/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:51:27 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/24 21:10:41 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;
	size_t				i;

	t = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (t[i] == (unsigned char)c)
			return ((void *)(t + i));
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	int		i = 1584313135;
// 	char	*ptr = ft_memchr(&i, 110, 4);
// 	char	*ptr2 = memchr(&i, 110, 4);
// 	int j = 1;
// 	printf("%c", ptr[j]);
// 	printf("%c", ptr2[j]);
// 	return (0);
// 	ft_memchr(NULL, 48, 2);
// 	memchr(NULL, 48, 2);
// }