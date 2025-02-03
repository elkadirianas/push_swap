/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils1_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:40:30 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/03 15:40:31 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

t_list	*ft_lstnew(int data)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	free_list(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		(tmp) = (tmp)->next;
		free(*lst);
		*lst = tmp;
	}
}

int	is_sorted(t_list *lst)
{
	while (lst && lst->next)
	{
		if (lst->data > lst->next->data)
			return (0);
		lst = lst->next;
	}
	return (1);
}
