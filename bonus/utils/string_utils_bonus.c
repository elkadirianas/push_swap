/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:40:41 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 15:40:42 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static int	ft_isdigit(int c)
{
	int	result;

	result = (c >= '0' && c <= '9');
	return (result);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s1))
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_move(char *str)
{
	if ((!ft_strcmp(str, "pa") || !ft_strcmp(str, "pb") || !ft_strcmp(str, "sa")
			|| !ft_strcmp(str, "sb") || !ft_strcmp(str, "ss") || !ft_strcmp(str,
				"ra") || !ft_strcmp(str, "rb") || !ft_strcmp(str, "rr")
			|| !ft_strcmp(str, "rra") || !ft_strcmp(str, "rrb")
			|| !ft_strcmp(str, "rra")))
		return (1);
	return (0);
}

long	ft_atol(const char *nbr)
{
	int					sign;
	unsigned long long	res;

	sign = 1;
	res = 0;
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign = -1;
		nbr++;
	}
	while (ft_isdigit(*nbr))
	{
		res = res * 10 + (*nbr - '0');
		nbr++;
	}
	return ((long)res * sign);
}
