/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:26:41 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/04 16:26:43 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	push(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!a || !(*b))
		return ;
	tmp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = tmp;
}

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

void	swap(t_list *lst)
{
	if (!lst || !lst->next)
		return ;
	swap_int(&(lst->data), &(lst->next->data));
}
