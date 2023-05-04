/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:35:59 by vmustone          #+#    #+#             */
/*   Updated: 2023/05/04 22:43:57 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	free (stack_a->ptr);
	free (stack_b->ptr);
}

void	init_string(t_stack *stack_a, t_stack *stack_b, char **argv)
{
	int	i;

	i = 0;
	stack_a->size = 0;
	while (argv[stack_a->size])
		stack_a->size++;
	stack_a->ptr = ft_calloc(stack_a->size, sizeof(int));
	stack_b->size = 0;
	stack_b->ptr = ft_calloc(stack_a->size, sizeof(int));
	if (stack_a->ptr == NULL)
		return ;
	while (i < stack_a->size)
	{
		if (stack_a->size == 1)
		{
			stack_a->ptr[0] = ft_atoi(argv[1]);
			return ;
		}
		stack_a->ptr[i] = ft_atoi(argv[i]);
		i++;
	}
}

void	init_stack(t_stack *stack_a, t_stack *stack_b, int argc, char **argv)
{
	int	i;

	i = 0;
	stack_a->size = argc - 1;
	stack_a->ptr = ft_calloc(stack_a->size, sizeof(int));
	stack_b->size = 0;
	stack_b->ptr = ft_calloc(stack_a->size, sizeof(int));
	if (stack_a->ptr == NULL)
		return ;
	while (i < stack_a->size)
	{
		if (stack_a->size == 1)
		{
			stack_a->ptr[0] = ft_atoi(argv[1]);
			return ;
		}
		stack_a->ptr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

void	print_stack(t_stack *stack)
{
	int	i;

	i = 0;
	ft_printf("stack :\n");
	while (i < stack->size)
	{
		ft_printf("%d\n", stack->ptr[i]);
		i++;
	}
	ft_printf("\n");
}

void	choose_sorting(t_stack *stack_a, t_stack *stack_b)
{
	if (is_sorted(stack_a) == 0 || stack_a->size == 1)
		return ;
	else if (stack_a->size == 2)
		sa(stack_a);
	else if (stack_a->size <= 5)
		sort_small_stack(stack_a, stack_b);
	else if (stack_a->size <= 100)
		sort_big_stack(stack_a, stack_b, 6);
	else if (stack_a->size > 100)
		sort_big_stack(stack_a, stack_b, 16);
}

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 2)
		return (0);
	if (argc == 2 && ft_strrchr(argv[1], ' ') != 0)
		argv = ft_split(argv[1], ' ');
	if (valid_input(argv) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	init_stack(&stack_a, &stack_b, argc, argv);
	choose_sorting(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
	return (0);
}
