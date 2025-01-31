#include "push_swap.h"

static int	ft_isdigit(int c)
{
	int	result;

	result = (c >= '0' && c <= '9');
	return (result);
}

int	ft_atoi(const char *nbr)
{
	int			sign;
	long long	res;

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
		if (res > (LLONG_MAX - (*nbr - '0')) / 10)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		res = res * 10 + (*nbr - '0');
		nbr++;
	}
	return (res * sign);
}
