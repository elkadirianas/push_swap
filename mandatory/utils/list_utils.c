/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:07:07 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:07:09 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	index(t_list *a, t_list *b)
{
	if (a->data > b->data)
		a->index++;
	else
		b->index++;
}

void	ft_lstadd_back(t_list **lst, int data)
{
	t_list	*new;
	t_list	*tmp;

	new = ft_lstnew(data);
	tmp = *lst;
	if (!new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	while (tmp && tmp->next)
	{
		index(tmp, new);
		tmp = tmp->next;
	}
	index(tmp, new);
	tmp->next = new;
}

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
