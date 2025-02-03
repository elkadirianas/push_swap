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

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*str;
	char	*tmp;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		parse(&stack_a, argc, argv);
		str = get_next_line(1);
		while (str)
		{
			tmp = str;
			if (!is_valid_move(str))
			{
				free_list(&stack_a);
				write(2, "Error\n", 6);
				exit(0);
			}
			excute_move(&stack_a, &stack_b, str);
			str = get_next_line(1);
			free(tmp);
		}
		free_list(&stack_a);
	}
	return (0);
}
