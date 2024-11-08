/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 10:53:02 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/29 12:38:01 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void to_uppercase(unsigned int i, char *c)
// {
//     if (*c >= 'a' && *c <= 'z')
//         *c = *c - ('a' - 'A'); // Convert to uppercase if it's lowercase
// }

// int	main()
// {
// 	char str[] = "hello";
// 	ft_striteri(str, to_uppercase);
// 	printf("%s", str);
// }
