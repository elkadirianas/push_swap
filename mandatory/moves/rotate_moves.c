/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:13:30 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:13:32 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	tmp = (*lst)->next;
	(*lst)->next = NULL;
	last->next = *lst;
	*lst = tmp;
}

void	ra(t_list **a)

{
	rotate(a);
	printf("ra\n");
}

void	rb(t_list **b)
{
	rotate(b);
	printf("rb\n");
}
