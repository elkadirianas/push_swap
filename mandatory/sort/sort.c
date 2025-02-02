/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:22:21 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/02 16:22:23 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int decide(t_list **stack_a){
	int count ; 
	t_list *tmp ;
	int	size;

	size = ft_lstsize(*stack_a);
	count =0 ;  
	tmp = *stack_a ; 

	while(tmp->next){
		if(tmp->index - tmp->next->index <= 4 )
			count++; 
		tmp=tmp->next ; 
	}
	if(count * 10 >=6 *size)
		return 0 ; 
	return 1 ; 
}

void	sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	// print_list(*stack_a, "stack_a");
	// print_list(*stack_b, "stack_b");
	if (size == 1 || is_sorted(*stack_a))
		return ;
	else if (size == 2)
		sort_2(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
	else
	{
		move_to_b(stack_a, stack_b);
		move_to_a(stack_a, stack_b);
	}
	// print_list(*stack_a, "stack_a");
	// print_list(*stack_b, "stack_b");
}
