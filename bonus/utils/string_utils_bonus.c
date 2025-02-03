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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

int	is_valid_move(char *str)
{
	if (!ft_strncmp(str, "pa", 2) || !ft_strncmp(str, "pb", 2)
		|| !ft_strncmp(str, "sa", 2) || !ft_strncmp(str, "sb", 2)
		|| !ft_strncmp(str, "ss", 2) || !ft_strncmp(str, "ra", 2)
		|| !ft_strncmp(str, "rb", 2) || !ft_strncmp(str, "rr", 2)
		|| !ft_strncmp(str, "rra", 3) || !ft_strncmp(str, "rrb", 2)
		|| !ft_strncmp(str, "rra", 2))
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
