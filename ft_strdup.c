/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:41:26 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/24 22:46:32 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	while (s1[i] != '\0')
		i++;
	ptr = malloc ((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int	main(void)
// {
// 	char	src[] = "salam cava     bekher   1234@jhgkjh.z.z.";
// 	char	*ptr;

// 	strdup(NULL);
// 	printf("%s", ptr);
// 	return (0);
// }