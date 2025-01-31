#include "push_swap.h"

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



