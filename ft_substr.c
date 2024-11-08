/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:09:00 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/27 22:01:01 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = malloc(1);
		if (sub)
			sub[0] = '\0';
		return (sub);
	}
	if (s_len - start < len)
		len = s_len - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
// int     main()
// {
//     char    *s = "salam cava";
//     char    *ptr = ft_substr(s, 3, 5);
//     printf("%s", ptr);
//     return (0);
// }
