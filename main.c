/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:35:59 by vmustone          #+#    #+#             */
/*   Updated: 2023/05/10 14:12:57 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_string(t_stack *stack_a, t_stack *stack_b, char **argv)
{
	int	i;

	i = 0;
	while (argv[stack_a->size])
		stack_a->size++;
	stack_a->ptr = ft_calloc((stack_a->size), sizeof(int));
	stack_b->size = 0;
	stack_b->ptr = ft_calloc(stack_a->size, sizeof(int));
	if (stack_a->ptr == NULL)
		return ;
	while (i < stack_a->size)
	{
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
		stack_a->ptr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

void	choose_sorting(t_stack *stack_a, t_stack *stack_b)
{
	if (is_sorted(stack_a) == 0)
		exit (0);
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
	{
		argv = ft_split(argv[1], ' ');
		if (valid_input(argv) == 0)
			errors(argv);
		init_string(&stack_a, &stack_b, argv);
	}
	else
	{
		if (valid_input(argv) == 0)
			errors(argv);
		init_stack(&stack_a, &stack_b, argc, argv);
	}
	choose_sorting(&stack_a, &stack_b);
	free_stacks(&stack_a, &stack_b);
	return (0);
}
