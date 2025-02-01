/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_moves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:13:25 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:13:27 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*prev;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	prev = *lst;
	while (prev->next->next)
		prev = prev->next;
	last = prev->next;
	prev->next = NULL;
	last->next = *lst;
	*lst = last;
}

void	rra(t_list **a)
{
	rev_rotate(a);
	printf("rra\n");
}

void	rrb(t_list **b)
{
	rev_rotate(b);
	printf("rrb\n");
}
