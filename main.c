/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:35:59 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/14 17:50:25 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack *stack_a, t_stack *stack_b)
{
	int i;

	i = 0;
	stack_a->size = 5;
	stack_a->ptr = 0;
	stack_b->size = 0;
	stack_b->ptr = 0;
	stack_a->ptr = malloc(sizeof(int) * stack_a->size);
	stack_b->ptr = malloc(sizeof(int) * stack_a->size);
	while (i < 5)
	{
		stack_b->ptr[i] = 0;
		i++;
	}
	print_stack(stack_b);
}

void    print_stack(t_stack *stack)
{
	//Muista poistaa!!!
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
	if (argc < 2)
	{
		ft_printf("./push_swap <arguments>\n");
		exit (0);
	}
	init_stack(&stack_a, &stack_b);
	/*
	stack_a.size = 0;
	stack_a.pointer = 0;
	stack_b.size = 3;
	stack_b.pointer = 0;
	stack_b.pointer = malloc(sizeof(int) * stack_b.size);
	stack_a.pointer = malloc(sizeof(int) * stack_b.size);
	*/
	while (i < stack_a.size)
	{
		stack_a.ptr[i] = ft_atoi(argv[i + 1]);
		//stack_b.ptr[i] = 0;
		i++;
	}
	print_stack(&stack_a);
	print_stack(&stack_b);
	pb(&stack_a, &stack_b);
	print_stack(&stack_b);
	pb(&stack_a, &stack_b);
	print_stack(&stack_a);
	print_stack(&stack_b);
	//algorithm_five_numbers(&stack_a, &stack_b);
	//print_stack(&stack_a);
	return (0);
}
