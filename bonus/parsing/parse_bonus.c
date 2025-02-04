/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:14:34 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 15:14:36 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	ft_error(char **splitted_arg, t_list **a)
{
	write(2, "Error\n", 6);
	free_splitted(splitted_arg);
	free_list(a);
	exit(0);
}

static void	ft_error1(char *tmp)
{
	write(2, "Error\n", 6);
	free(tmp);
	exit(0);
}

static char	*join_args(int argc, char **argv)
{
	char	*temp;
	char	*joined_args;
	int		i;

	joined_args = ft_strdup("");
	if (!joined_args)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		if (is_empty(argv[i]))
		{
			free(joined_args);
			ft_error1(NULL);
		}
		temp = joined_args;
		joined_args = ft_strjoinn(joined_args, argv[i]);
		free(temp);
		if (!joined_args)
			return (NULL);
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
