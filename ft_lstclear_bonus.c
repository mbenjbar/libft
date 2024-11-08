/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 21:39:12 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-11-05 21:39:12 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ref;
	t_list	*ref2;

	if (lst == NULL || del == NULL)
		return ;
	if (*lst == NULL)
		return ;
	ref = *lst;
	while (ref != NULL)
	{
		ref2 = ref;
		ref = ref ->next;
		ft_lstdelone(ref2, del);
	}
	*lst = NULL;
}
