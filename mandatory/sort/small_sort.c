/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:32:40 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/02 13:32:41 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_list **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(*stack_a);
}

void	sort_3(t_list **stack_a)
{
	if (max_position(stack_a) == 0)
		ra(stack_a);
	else if (max_position(stack_a) == 1)
		rra(stack_a);
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(*stack_a);
}

void	sort_4(t_list **stack_a, t_list **stack_b)
{
	if (min_position(stack_a) == 1)
		ra(stack_a);
	else if (min_position(stack_a) == 2)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (min_position(stack_a) == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	if (min_position(stack_a) == 1)
		ra(stack_a);
	else if (min_position(stack_a) == 2)
	{
		rra(stack_a);
		rra(stack_a);
		rra(stack_a);
	}
	else if (min_position(stack_a) == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}
