/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:41:57 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 18:41:59 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	excute_move(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strncmp(str, "sa", 2))
		swap(*stack_a);
	else if (!ft_strncmp(str, "rra", 3))
		rev_rotate(stack_a);
	else if (!ft_strncmp(str, "rrb", 3))
		rev_rotate(stack_b);
	else if (!ft_strncmp(str, "rrr", 3))
	{
		rev_rotate(stack_a);
		rev_rotate(stack_b);
	}
	else if (!ft_strncmp(str, "sb", 2))
		swap(*stack_b);
	else if (!ft_strncmp(str, "ss", 2))
	{
		swap(*stack_a);
		swap(*stack_b);
	}
	else if (!ft_strncmp(str, "ra", 2))
		rotate(stack_a);
	else if (!ft_strncmp(str, "rb", 2))
		rotate(stack_b);
	else if (!ft_strncmp(str, "rr", 2))
	{
		rotate(stack_a);
		rotate(stack_b);
	}
	else if (!ft_strncmp(str, "pa", 2))
		push(stack_a, stack_b);
	else if (!ft_strncmp(str, "pb", 2))
		push(stack_b, stack_a);
}
