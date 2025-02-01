
#include "push_swap.h"





int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i =1;
	while (i <argc)
	{
		ft_lstadd_back(&stack_a, ft_atoi(argv[i]));
		i++;
	}
	print_list(stack_a, "stack_a");
	print_list(stack_b, "stack_b");
    rra(&stack_a); 

	print_list(stack_a, "stack_a");
	print_list(stack_b, "stack_b");
	return (0);
}
