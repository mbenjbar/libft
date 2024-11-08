/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 22:35:51 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-10-28 22:35:51 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_char(int c)
{
	size_t	count;

	count = 0;
	if (c < 0)
	{
		count++;
		c = c * -1;
	}
	while (c != 0)
	{
		count ++;
		c = c / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	ptr = malloc(count_char(n) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[count_char(n)] = '\0';
	i = count_char(n) - 1;
	if (n < 0)
		n = n * -1;
	while (i >= 0 && n != 0)
	{
		ptr[i--] = n % 10 + '0';
		n = n / 10;
	}
	if (i == 0)
		ptr[i] = '-';
	return (ptr);
}

// int	main()
// {
// 	char	*ptr = ft_itoa(2147);
// 	printf("%s", ptr);
// 	return (0);
// }