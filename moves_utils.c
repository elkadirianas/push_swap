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
	t_list	*node;
	t_list	*last;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	node = (*lst)->next;
	(*lst)->next = NULL;
	last->next = *lst;
	*lst = node;
}

void	rev_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*second_last;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	second_last = *lst;
	while (second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *lst;
	*lst = last;
}