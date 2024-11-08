/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 12:44:25 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-10-30 12:44:25 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	negat(int n, int fd)
{
	int		i;
	char	s[10];

	i = 0;
	while (n != 0)
	{
		s[i] = n % 10 + '0';
		i++;
		n = n / 10;
	}
	i--;
	while (i >= 0)
	{
		write (fd, &s[i], 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	negat(n, fd);
}

// int	main()
// {
// 	ft_putnbr_fd(2147483647, 1);
// }