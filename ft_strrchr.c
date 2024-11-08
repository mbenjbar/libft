/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:50:43 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/25 21:41:41 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	m;
	size_t			i;
	char			*last;

	m = (unsigned char)c;
	last = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == m)
			last = (char *)(s + i);
		i++;
	}
	if (m == s[i])
		return ((char *)(s + i));
	return ((char *)(last));
}
// int	main(void)
// {
// 	char	*l = "salaxm c0av";
// 	char	s;
// 	char	*ptr;
// 	char	*ptr2;

// 	s = 'a';
// 	ptr = ft_strrchr(l, 97 + 256);
// 	printf("%s", ptr);
// 	ptr2 = strrchr(l, 97 + 256);
// 	printf("%s", ptr2);
// 	return (0);
// }