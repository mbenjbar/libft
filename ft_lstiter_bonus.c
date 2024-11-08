/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenjbar <mbenjbar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 21:39:20 by mbenjbar          #+#    #+#             */
/*   Updated: 2024-11-05 21:39:20 by mbenjbar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ref;

	if (lst == NULL || f == NULL)
		return ;
	ref = lst;
	while (ref != NULL)
	{
		f(ref ->content);
		ref = ref ->next;
	}
}
// void print_content(void *content) {
//     printf("%s\n", (char *)content);
// }

// int main() {
//     t_list *head = ft_lstnew("First node");
//     head->next = ft_lstnew("Second node");
//     head->next->next = ft_lstnew("Third node");
//     ft_lstiter(head, print_content);
//     return 0;
// }
