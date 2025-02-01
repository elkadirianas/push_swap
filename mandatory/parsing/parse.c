/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:27:54 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:27:55 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

void	parse(t_list **a, int argc, char **argv)
{
	int		i;
	char	*joined_args;
	char	*temp;
	char	**splitted_arg;

	i = 1;
	joined_args = NULL;
	while (i < argc)
	{
		temp = joined_args; 
		if(is_empty(argv[i])){
			printf("error\n"); 
			free(temp); 
			return ; 
		}
		joined_args = ft_strjoin(joined_args, argv[i]); 
		free(temp);  
		i++;
	}
	splitted_arg = ft_split(joined_args, ' ');
	free(joined_args); 

	i = 0;
	while (splitted_arg[i])
	{
		if (!is_valid(splitted_arg[i]))
		{
			printf("error"); 
			free_splitted(splitted_arg, argc);
			free_list(a);
			return;
		}
		else
			ft_lstadd_back(a, ft_atol(splitted_arg[i]));
		i++;
	}
	free_splitted(splitted_arg, argc); 
}

