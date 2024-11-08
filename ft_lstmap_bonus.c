/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 21:39:31 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-11-05 21:39:31 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*function(t_list *ref2, t_list *ptr, void (*del)(void *))
{
	ptr ->next = NULL;
	ft_lstclear(&ref2, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_one;
	t_list	*ref2;
	t_list	*ptr;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_one = malloc(sizeof(t_list));
	if (new_one == NULL)
		return (NULL);
	new_one ->content = f(lst ->content);
	ref2 = new_one;
	while (lst ->next != NULL)
	{
		lst = lst ->next;
		ptr = new_one;
		new_one = malloc(sizeof(t_list));
		if (new_one == NULL)
			return (function(ref2, ptr, del));
		ptr ->next = new_one;
		new_one ->content = f(lst ->content);
	}
	new_one ->next = NULL;
	return (ref2);
}
