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

static void	checker(t_list **stack_a, t_list **stack_b)
{
	char	*str;
	char	*tmp;

	str = get_next_line(0);
	while (str)
	{
		tmp = str;
		if (!is_valid_move(str))
		{
			free_list(stack_a);
			write(2, "Error\n", 6);
			exit(0);
		}
		excute_move(stack_a, stack_b, str);
		str = get_next_line(0);
		free(tmp);
	}
	if (is_sorted(*stack_a) && !(*stack_b))
		write(1, "OK\n", 2);
	else
		write(1, "ERROR\n", 6);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		parse(&stack_a, argc, argv);
		checker(&stack_a, &stack_b);
		free_list(&stack_a);
	}
	return (0);
}
