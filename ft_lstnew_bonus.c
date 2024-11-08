/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 21:39:36 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-11-05 21:39:36 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc((sizeof(t_list)));
	if (new_node == NULL)
		return (NULL);
	new_node ->content = content;
	new_node ->next = NULL;
	return (new_node);
}
// int	main()
// {
// 	t_list	*ptr;
// 	char	s = 'c';

// 	ptr = ft_lstnew(&s);
// 	printf("%c\n", *(char *)ptr->content);
// 	free(ptr);
// 	return 0;
// }