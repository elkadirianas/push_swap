#include "push_swap.h"


t_list *ft_lstnew(int data) {
    t_list *new = (t_list *)malloc(sizeof(t_list));
    if (!new) return NULL;
    new->data = data;
    new->next = NULL;
    return new;
}

void ft_lstadd_front(t_list **lst, int data) {
    t_list *new = ft_lstnew(data);
    if (!new) return;
    new->next = *lst;
    *lst = new;
}

void print_list(t_list *lst) {
    while (lst) {
        printf("[%d] --> ", lst->data);
        lst = lst->next;
    }
    printf("NULL\n");
}
