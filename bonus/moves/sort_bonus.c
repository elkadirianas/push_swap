/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:41:57 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/04 16:26:49 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	excute_move(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strcmp(str, "sa\n"))
		swap(*stack_a);
	else if (ft_strcmp(str, "rra\n"))
		rev_rotate(stack_a);
	else if (ft_strcmp(str, "rrb\n"))
		rev_rotate(stack_b);
	else if (ft_strcmp(str, "rrr\n"))
		rrr(stack_a, stack_b);
	else if (ft_strcmp(str, "sb\n"))
		swap(*stack_b);
	else if (ft_strcmp(str, "ss\n"))
		ss(*stack_a, *stack_b);
	else if (ft_strcmp(str, "ra\n"))
		rotate(stack_a);
	else if (ft_strcmp(str, "rb\n"))
		rotate(stack_b);
	else if (ft_strcmp(str, "rr\n"))
		rr(stack_a, stack_b);
	else if (ft_strcmp(str, "pa\n"))
		push(stack_a, stack_b);
	else if (ft_strcmp(str, "pb\n"))
		push(stack_b, stack_a);
}
