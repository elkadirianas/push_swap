
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "stdlib.h"
#include "limits.h"
#include "stdio.h"

typedef struct s_list {
    int data;
    struct s_list *next;
} t_list;

// linked_list_utils 

t_list *ft_lstnew(int data); 
void ft_lstadd_front(t_list **lst, int data); 
void print_list(t_list *lst); 

// string utils

int	ft_atoi(const char *nbr); 

#endif