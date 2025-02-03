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

#include "stdio.h"
static void	print_list(t_list *lst, char *str)
{
	printf("List %s : \t ", str);
	while (lst)
	{
		printf("[ data : %d] --> ",lst->data);
		lst = lst->next;
	}
	printf("NULL\n");
}


int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*str;
	char	*tmp;

	atexit(f);
	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		parse(&stack_a, argc, argv);
		print_list(stack_a,"stack_a before"); 
		print_list(stack_b,"stack_b before "); 
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
	print_list(stack_a,"stack_a after"); 
	print_list(stack_b,"stack_b after"); 
	return (0);
}
