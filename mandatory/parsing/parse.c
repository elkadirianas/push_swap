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

static void	ft_error(char **splitted_arg, t_list **a)
{
	printf("error\n");
	free_splitted(splitted_arg);
	free_list(a);
	exit(1);
}

static void	ft_error1(char *tmp)
{
	printf("error\n");
	free(tmp);
	exit(1);
}

static char	*join_args(int argc, char **argv)
{
	char	*temp;
	char	*joined_args;
	int		i;

	i = 1;
	while (i < argc)
	{
		temp = joined_args;
		if (is_empty(argv[i]))
			ft_error1(temp);
		joined_args = ft_strjoin(joined_args, argv[i]);
		free(temp);
		i++;
	}
	return (joined_args);
}

void	parse(t_list **a, int argc, char **argv)
{
	int		i;
	char	*joined_args;
	char	**splitted_arg;

	joined_args = join_args(argc, argv);
	splitted_arg = ft_split(joined_args, ' ');
	free(joined_args);
	i = 0;
	while (splitted_arg[i])
	{
		if (!is_valid(splitted_arg[i]))
			ft_error(splitted_arg, a);
		else
		{
			if (is_dup(*a, ft_atol(splitted_arg[i])))
				ft_error(splitted_arg, a);
			ft_lstadd_back(a, ft_atol(splitted_arg[i]));
		}
		i++;
	}
	free_splitted(splitted_arg);
}
