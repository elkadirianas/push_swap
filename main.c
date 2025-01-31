
#include "push_swap.h"


int main(int argc, char **argv) {
    t_list *stack_a = NULL;
    t_list *stack_b = NULL; 
    int i = 1; 

    while (i < argc) {
        ft_lstadd_front(&stack_a, ft_atoi(argv[i])); 
        i++;  
    }

    print_list(stack_a,"a");
    // print_list(stack_b,"b"); 
    // push(&stack_b,&stack_a); 
    // pb(&stack_a,&stack_b); 
    rotate(stack_a); 
    print_list(stack_a,"a");
    // print_list(stack_b,"b"); 
    // pa(&stack_a,&stack_b); 
    // print_list(stack_a,"a");
    // print_list(stack_b,"b"); 
    return 0;
}
