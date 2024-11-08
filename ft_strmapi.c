/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 10:17:11 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-10-29 10:17:11 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ptr;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	ptr = malloc (len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char shift_by_index(unsigned int i, char c) {
//     return c + i;
// }
// char by_index(unsigned int i, char c) {
//     return c + 1;
// }
// int main (){
// 	char	*ptr = 	ft_strmapi("salam cava", shift_by_index);
// 	printf("%s \n", ptr);
// 	ptr = 	ft_strmapi("salam cava", by_index);
// 	printf("%s", ptr);
// }