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
	new->index = 0;
	new->next = NULL;
	return (new);
}

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

void	print_list(t_list *lst, char *str)
{
	printf("List %s : \t ", str);
	while (lst)
	{
		printf("[ data : %d , index  : %d] --> ", lst->data, lst->index);
		lst = lst->next;
	}
	printf("NULL\n");
}
