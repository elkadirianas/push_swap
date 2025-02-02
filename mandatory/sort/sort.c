/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 23:00:00 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 23:00:02 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	max_position(t_list **b)
{
	t_list	*tmp;
	int		i;
	int		max_temp;
	int		pos;

	i = 0;
	pos = i;
	max_temp = (*b)->data;
	tmp = *b;
	while (i < ft_lstsize(*b) - 1)
	{
		tmp = tmp->next;
		i++;
		if (tmp->data > max_temp)
		{
			max_temp = tmp->data;
			pos = i;
		}
	}
	return (pos);
}

int	min_position(t_list **b)
{
	t_list	*tmp;
	int		i;
	int		min_temp;
	int		pos;

	i = 0;
	pos = i;
	min_temp = (*b)->data;
	tmp = *b;
	while (i < ft_lstsize(*b) - 1)
	{
		tmp = tmp->next;
		i++;
		if (tmp->data < min_temp)
		{
			min_temp = tmp->data;
			pos = i;
		}
	}
	return (pos);
}

void	move_to_b(t_list **a, t_list **b)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(*a);
	while (i < size)
	{
		if ((*a)->index <= i)
		{
			i++;
			pb(a, b);
		}
		else if ((*a)->index <= i + 16)
		{
			i++;
			pb(a, b);
			rb(b);
		}
		else
			ra(a);
	}
}

void	move_to_a(t_list **a, t_list **b)
{
	int	pos;
	int	size;

	size = ft_lstsize(*b);
	while (size--)
	{
		pos = max_position(b);
		if (pos <= ft_lstsize(*b) / 2)
			while (pos-- > 0)
				rb(b);
		else
			while (pos++ < ft_lstsize(*b))
				rrb(b);
		pa(a, b);
	}
}
