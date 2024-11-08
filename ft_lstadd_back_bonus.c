/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 21:38:44 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-11-05 21:38:44 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ref;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		ref = *lst;
		while (ref ->next != NULL)
			ref = ref ->next;
		ref ->next = new;
	}
}
// int main()
// {
//     t_list *new;
//     new = malloc(sizeof(t_list));
//     new->content = "salam";
//     new->next = NULL;
//     ft_lstadd_back(NULL, new);
//     free(new);
//     return 0;
// }