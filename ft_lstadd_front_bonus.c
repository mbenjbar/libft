/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 21:38:56 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-11-05 21:38:56 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *new;
//     new = malloc(sizeof(t_list));
//     if (new == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     new->content = "salam";
//     new->next = NULL;
//     ft_lstadd_front(NULL, new);
//     free(new);
//     return 0;
// }