
#include "push_swap.h"

// t_list *parse_em(int ac, char **av)
// {
//     char ***yuta;
//     t_list *stack_a = NULL;
//     int i;
//     int j;

//     i = -1;
//     j = ac;
//     yuta = malloc((ac + 1) * sizeof(char **));
//     yuta[ac] = NULL;
//     while (av[++i])
//         yuta[i] = ft_split(av[i]);
//     while (--j >= 0)
//     {
//         i = -1;
//         while (yuta[j][++i])
//         {
//             ft_lstadd_back(&stack_a, ft_atoi(yuta[j][i]));
//         }
//     }
//     return (stack_a);
// }
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
