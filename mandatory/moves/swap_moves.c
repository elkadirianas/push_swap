/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:13:36 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:13:37 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list *lst)
{
	if (!lst || !lst->next)
		return ;
	swap_int(&(lst->data), &(lst->next->data));
}

void	sa(t_list *a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list *b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list *a, t_list *b)

{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
