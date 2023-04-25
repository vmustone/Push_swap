/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:35:59 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/25 20:51:07 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_stack(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->size = 10;
	stack_a->ptr = 0;
	stack_b->size = 0;
	stack_b->ptr = 0;
	stack_a->ptr = malloc(sizeof(int) * stack_a->size);
	stack_b->ptr = malloc(sizeof(int) * stack_a->size);
}

void    print_stack(t_stack *stack)
{
    int    i;

    i = 0;
    ft_printf("stack :\n");
    while (i < stack->size)
    {
        ft_printf("%d\n", stack->ptr[i]);
        i++;
    }
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int i;

	i = 0;
	if (argc > 1)
	{
		init_stack(&stack_a, &stack_b);
		while (i < stack_a.size)
		{
			stack_a.ptr[i] = ft_atoi(argv[i + 1]);
			i++;
		}
	}
	if (is_sorted(&stack_a))
		return (0);
	if (stack_a.size <= 5)
		sort_small_stack(&stack_a, &stack_b);
	chunks(&stack_a, &stack_b);
	return (0);
}