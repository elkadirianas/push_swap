/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:13:18 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:13:20 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
	printf("pb\n");
}
