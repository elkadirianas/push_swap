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
	if (!ft_strcmp(str, "sa"))
		swap(*stack_a);
	else if (!ft_strcmp(str, "rra"))
		rev_rotate(stack_a);
	else if (!ft_strcmp(str, "rrb"))
		rev_rotate(stack_b);
	else if (!ft_strcmp(str, "rrr"))
		rrr(stack_a, stack_b);
	else if (!ft_strcmp(str, "sb"))
		swap(*stack_b);
	else if (!ft_strcmp(str, "ss"))
		ss(*stack_a, *stack_b);
	else if (!ft_strcmp(str, "ra"))
		rotate(stack_a);
	else if (!ft_strcmp(str, "rb"))
		rotate(stack_b);
	else if (!ft_strcmp(str, "rr"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(str, "pa"))
		push(stack_a, stack_b);
	else if (!ft_strcmp(str, "pb"))
		push(stack_b, stack_a);
}
