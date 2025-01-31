
#include "push_swap.h"


int main(int argc, char **argv) {
    t_list *stack_a = NULL;
    t_list *stack_b = NULL; 
    int i = argc - 1 ; 

    while (i >= 1) {
        ft_lstadd_back(&stack_a, ft_atoi(argv[i])); 
        i--;  
    }

    print_list(stack_a,"a");
    print_list(stack_b,"b"); 
    // push(&stack_a,&stack_b); 
    // push(stack_a,stack_b); 
    // pa(&stack_a,&stack_b); 
    // sb(stack_b); 
    rev_rotate(stack_a); 
    // print_list(stack_a,"a");
    print_list(stack_a,"a");
    print_list(stack_b,"b"); 
    // pa(&stack_a,&stack_b); 
    // print_list(stack_b,"b"); 
    return 0;
}
