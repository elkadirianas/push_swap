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
