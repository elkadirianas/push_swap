#include "push_swap.h"

void	sa(t_list *a)
{
	swap(a);
	printf("sa\n");
}
void	sb(t_list *b)
{
	swap(b);
	printf("sb\n");
}

void	ss(t_list *a, t_list *b)

{
	swap(a);
	swap(b);
	printf("ss\n");
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
	printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(b,a);
	printf("pb\n");
}

void	ra(t_list **a)

{
	rotate(a);
	printf("ra\n");
}
void	rb(t_list **b)
{
	rotate(b);
	printf("rb\n");
}

void	rra(t_list **a)
{
	rev_rotate(a);
	printf("rra\n");
}
void	rrb(t_list **b)
{
	rev_rotate(b);
	printf("rrb\n");
}
