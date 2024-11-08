/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:44:04 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/25 21:19:41 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*int	main(void)
{
	char	s;// = "salam cava";
	int		d;

	s = 'z';
	d = ft_toupper(s);
	//printf("%d", d);
	printf("%c\n", d);
	return (0);

}*/
