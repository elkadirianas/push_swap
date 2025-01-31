#include "push_swap.h"




void swap(t_list *a){
    if(!a || !(a->next))
        return ; 
    swap_int(&(a->data),&((a->next)->data)); 
}

void sa(t_list *a){
    swap(a); 
    printf("sa\n"); 
}
void sb(t_list *a){
    swap(a); 
    printf("\nsb\n"); 
}

void ss(t_list *a , t_list *b){
    swap(a); 
    swap(b); 
}

void pa(t_list **a , t_list **b){
    push(b,a); 
    printf("pa\n"); 
}

void pb(t_list **a , t_list **b){
    push(a,b); 
    printf("pb\n"); 
}

void ra(t_list *a){
    rotate(a); 
    printf("ra\n"); 
}
void rb(t_list *b){
    rotate(b); 
    printf("rb\n"); 
}


void rotate(t_list *a){
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

void push(t_list **a , t_list **b){
    t_list *tmp = *a ; 

    if(!a || !(*a))
        return ; 
    tmp=(*a)->next; 
    (*a)->next=*b; 
    *b=*a;  
    *a=(tmp); 
}

