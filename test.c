#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

// Create a new node
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

// Add a node at the front
void	ft_lstadd_front(t_list **lst, int data)
{
	t_list	*new;

	new = ft_lstnew(data);
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// Get the last node
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// Print the list
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("[%d] --> ", lst->data);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*a = NULL, *b;

	a = NULL, b = NULL;
	// Initialize Stack A with values
	ft_lstadd_front(&a, 3);
	ft_lstadd_front(&a, 2);
	ft_lstadd_front(&a, 1); // Stack A: 1 -> 2 -> 3
	printf("Stack A before push:\n");
	print_list(a);
	printf("Stack B before push:\n");
	print_list(b);
	push(&a, &b);
	printf("\nAfter push operation:\n");
	printf("Stack A:\n");
	print_list(a);
	printf("Stack B:\n");
	print_list(b);
	return (0);
}
