/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkadir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:07:23 by aelkadir          #+#    #+#             */
/*   Updated: 2025/02/01 14:07:25 by aelkadir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "limits.h"
# include "stdio.h"
# include "stdlib.h"

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}					t_list;

// linked_list_utils

t_list				*ft_lstnew(int data);
int					ft_lstsize(t_list *lst);
void				print_list(t_list *lst, char *str);
void				ft_lstadd_back(t_list **lst, int data);
t_list				*ft_lstlast(t_list *lst);
void				free_list(t_list **lst);
// string utils

long				ft_atol(const char *nbr);
int					ft_strlen(const char *s);
// utils
void				swap_int(int *a, int *b);
int					is_valid(char *str);
int					is_empty(char *str);
int					is_dup(t_list *a, int num);
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

// parsing
void				parse(t_list **a, int argc, char **argv);
char				**ft_split(char const *s, char c);
char				**free_splitted(char **splitted);
char				*ft_strjoin(char const *s1, char const *s2);

// sort
int					max_position(t_list **b);
int					min_position(t_list **b);
void				move_to_b(t_list **a, t_list **b);
void				move_to_a(t_list **a, t_list **b);
void				sort_2(t_list **stack_a);
void				sort_3(t_list **stack_a);
void				sort_4(t_list **stack_a, t_list **stack_b);
void				sort_5(t_list **stack_a, t_list **stack_b);
void				sort(t_list **stack_a, t_list **stack_b);

#endif
