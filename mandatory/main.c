/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:07:37 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:07:39 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void f(){
	system("leaks push_swap"); 
}
int	main(int argc, char **argv)
{
	atexit(f); 
	t_list	*stack_a;
	t_list *stack_b ; 

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
		parse(&stack_a, argc, argv);
	print_list(stack_a, "stack_a");
	// print_list(stack_b, "stack_b");
	// // ra(&stack_a); 
	// print_list(stack_a, "stack_a");
	// print_list(stack_b, "stack_b");
	free_list(&stack_a); 
	return (0);
}
