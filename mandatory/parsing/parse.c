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
	char	**splitted_arg;

	i = 1;
	joined_args = NULL;
	while (i < argc)
	{
		joined_args = ft_strjoin(joined_args, argv[i]);
		i++;
	}
	splitted_arg = ft_split(joined_args, ' ');
	i = 0;
	while (splitted_arg[i])
	{
		ft_lstadd_back(a, atoi(splitted_arg[i]));
		i++;
	}
}
