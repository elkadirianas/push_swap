/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:15:20 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 15:15:21 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	f(void)
{
	system("leaks checker");
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	atexit(f);
	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		parse(&stack_a, argc, argv);
		free_list(&stack_a);
	}
	return (0);
}
