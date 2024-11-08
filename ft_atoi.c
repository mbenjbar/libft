/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:53:40 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/24 22:07:59 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	long	result;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result < 0)
			return ((-sign) * (sign == 1));
		i++;
	}
	return ((int)(result * sign));
}
// int	main()
// {
// 	char	*s = "     -98888grjhjejjjyr";
// 	int d = ft_atoi(s);
// 	int c = ft_atoi(s);
// 	printf("%d\n", d);
// 	printf("%d\n", c);
// }