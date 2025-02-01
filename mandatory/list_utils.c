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

#include "push_swap.h"

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

void	ft_lstadd_front(t_list **lst, int data)
{
	t_list	*new;

	new = ft_lstnew(data);
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
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
	while ((tmp) && (tmp)->next)
		(tmp) = (tmp)->next;
	(tmp)->next = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	print_list(t_list *lst, char *str)
{
	printf("List %s : \t ", str);
	while (lst)
	{
		printf("[%d] --> ", lst->data);
		lst = lst->next;
	}
	printf("NULL\n");
}
