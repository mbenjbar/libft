/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:02:52 by mbenjbar          #+#    #+#             */
/*   Updated: 2024/10/27 22:02:54 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len_s1;
	size_t	len_s2;
	size_t	result_size;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	if (s2 == NULL && s1 != NULL)
		return (ft_strdup(s1));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result_size = len_s1 + len_s2 + 1;
	result = malloc(result_size);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, result_size);
	ft_strlcat(result, s2, result_size);
	return (result);
}
// int     main()
// {
//     char    *s1 = "";
// 	char    *s2 = "";
//     char    *ptr = ft_strjoin(s1, s2);
//     printf("%s", ptr);
//     return (0);
// }