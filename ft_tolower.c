/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:00:22 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/25 21:21:34 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*int	main(void)
{
	char	s;// = "salam cava";
	int		d;

	s = 'A';
	d = ft_tolower(s);
	//printf("%d", d);
	printf("%c\n", d);
	return (0);

}*/
