/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:40:35 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 15:40:36 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
		tmp = tmp->next;
	}
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
