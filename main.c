
#include "push_swap.h"


int main(int argc, char **argv) {
    t_list *stack = NULL; 
    int i = 1; 

    while (i < argc) {
        ft_lstadd_front(&stack, ft_atoi(argv[i])); 
        i++;  
    }

    print_list(stack);

    return 0;
}
