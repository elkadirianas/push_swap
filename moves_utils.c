#include "push_swap.h"

void rotate(t_list *a){
    if(!a || !(a->next))
        return ;
    t_list *tmp ; 
    int temp ; 
    tmp = a->next ;
    temp = a->data; 
    a->data=ft_lstlast(a)->data; 
    while(tmp){
        swap_int(&temp,&(tmp->data)); 
        tmp=tmp->next; 
    }
}

void rev_rotate(t_list *a){
    if(!a || !(a->next))
        return ;
    swap_int(&(a->data),&(ft_lstlast(a)->data)); 
    t_list *tmp ;
    // int temp ; 
    tmp = a ;
    // temp = (a->next)->data; 
    while(tmp && tmp->next && (tmp->next)->next){
        swap_int(&tmp->data,&((tmp->next)->data)); 
        tmp=tmp->next; 
    }
}

void	ft_lstrotate(t_list **lst)
{
	t_list	*node;
	t_list	*last;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	node = (*lst)->next;
	(*lst)->next = NULL;
	last->next = *lst;
	*lst = node;
}


void push(t_list **a, t_list **b) {
    if (!a || !*a) return;  

    t_list *tmp = *a;
    t_list *prev = NULL;

    while (tmp->next) {
        prev = tmp;
        tmp = tmp->next;
    }


    if (!prev)
        *a = NULL;
    else
        prev->next = NULL; 

    tmp->next = *b;
    *b = tmp;
}


void swap(t_list *a){
    t_list *tmp  = a; 
    if(!a || !(a->next))
        return ; 
    while((tmp->next)->next){
        tmp=tmp->next; 
    }
    swap_int(&(tmp->data),&((tmp->next)->data)); 
}