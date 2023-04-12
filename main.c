/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:35:59 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/12 13:37:52 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_stack(t_stack *stack)
{
	//Muista poistaa!!!
    int    i;

    i = 0;
    ft_printf("stack :\n");
    while (i < stack->size)
    {
        ft_printf("%d\n", stack->pointer[i]);
        i++;
    }
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
	stack_a.size = 0;
	stack_a.pointer = 0;
	stack_b.size = 3;
	stack_b.pointer = 0;
	stack_b.pointer = malloc(sizeof(int) * stack_b.size);
	stack_a.pointer = malloc(sizeof(int) * stack_b.size);
	while (i < stack_b.size)
	{
		stack_b.pointer[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	
	print_stack(&stack_b);
	rrb(&stack_b);
	print_stack(&stack_a);
	print_stack(&stack_b);
	rrb(&stack_b);
	print_stack(&stack_b);
	return (0);
}
