#include "push_swap.h"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:19:11 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/25 20:47:44 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *lst)
{
	int	temp;

	if (!lst || !lst->next)
		return ;
    swap_int(&(lst->data),&(lst->next->data));
}

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