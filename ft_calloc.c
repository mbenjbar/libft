/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:48:08 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/24 23:00:50 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	num;

	num = size * count;
	if (count != 0 && num / count != size)
		return (NULL);
	ptr = (void *)malloc(num);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num);
	return (ptr);
}
// int	main()
// {
// 	char	*ptr = ft_calloc(8, 1);
// 	printf("%s", ptr);
// 	ft_memset(ptr, 48, 8);
// 	printf("%s", ptr);
// }
