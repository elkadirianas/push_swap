
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "limits.h"
# include "stdio.h"
# include "stdlib.h"

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

// linked_list_utils

t_list				*ft_lstnew(int data);
void				ft_lstadd_front(t_list **lst, int data);
void				print_list(t_list *lst, char *str);
void				ft_lstadd_back(t_list **lst, int data);
t_list				*ft_lstlast(t_list *lst);
// string utils

int					ft_atoi(const char *nbr);

// utils 
void swap_int(int *a,int *b); 
// moves

void				sa(t_list *a);
void				sb(t_list *a);
void				ss(t_list *a, t_list *b);
void				pa(t_list **a, t_list **b);
void				pb(t_list **a, t_list **b);
void				ra(t_list **a);
void				rb(t_list **b);
void				rra(t_list **a);
void				rrb(t_list **a);

// moves utils
void				swap(t_list *a);
void				push(t_list **a, t_list **b);
void				rev_rotate(t_list **lst);
void				rotate(t_list **lst);

#endif