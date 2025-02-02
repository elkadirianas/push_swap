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

void	f(void)
{
	system("leaks push_swap");
}
int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	atexit(f);
	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
		parse(&stack_a, argc, argv);
	print_list(stack_a,"stack_a"); 
	free_list(&stack_a);
	return (0);
}
