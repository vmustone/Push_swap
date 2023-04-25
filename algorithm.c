/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:42:37 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/18 16:01:33 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	smallest_index(t_stack *stack_a)
{
	int	i;
	int	smallest;
	int smallest_index;

	i = 0;
	smallest = stack_a->ptr[0];
	while (i < stack_a->size)
	{
		if (stack_a->ptr[i] <= smallest)
		{
			smallest = stack_a->ptr[i];
			smallest_index = i;
		}
		i++;
	}
	return (smallest_index);
}

static int	smallest_number(t_stack *stack_a)
{
	int	i;
	int	smallest;

	i = 0;
	smallest = stack_a->ptr[0];
	while (i < stack_a->size)
	{
		if (stack_a->ptr[i] <= smallest)
			smallest = stack_a->ptr[i];
		i++;
	}
	return (smallest);
}

static int	biggest_number(t_stack *stack_a)
{
	int	i;
	int max;

	i = 0;
	max = stack_a->ptr[0];
	while (i < stack_a->size)
	{
		if (stack_a->ptr[i] >= max)
			max = stack_a->ptr[i];
		i++;
	}
	return (max);
}

int	is_sorted(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (i < stack_a->size)
	{
		if (stack_a->ptr[i] < stack_a->ptr[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}
/*
static int	bubble_sort(t_stack *stack_a)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < stack_a->size - 1)
	{
		j = 0;
		 while (j < stack_a->size - i - 1)
		 {
			if (stack_a->ptr[j] > stack_a->ptr[j + 1])
			{
				tmp = stack_a->ptr[j];
				stack_a->ptr[j] = stack_a->ptr[j + 1];
				stack_a->ptr[j + 1] = tmp;
			}
			j++;
		 }
		 i++;
	}
	return (*stack_a->ptr);
}
*/

void	sort_three(t_stack *stack_a)
{
	if (stack_a->ptr[0] > stack_a->ptr[1] && stack_a->ptr[0] > stack_a->ptr[2])
		ra(stack_a);
	if (stack_a->ptr[1] > stack_a->ptr[0] && stack_a->ptr[1] > stack_a->ptr[2])
		rra(stack_a);
	if (stack_a->ptr[0] > stack_a->ptr[1])
		sa(stack_a);
}

void	sort_small_stack(t_stack *stack_a, t_stack *stack_b)
{
	int	pos;

	pos = 0;
	while (stack_a->size > 3)
	{
		pos = smallest_index(stack_a);
		while (pos > 0 && pos < stack_a->size)
		{
			if (pos > stack_a->size / 2)
			{
				rra(stack_a);
				pos++;
			}
			if (pos <= stack_a->size / 2)
			{
				ra(stack_a);
				pos--;
			}
		}
		pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (stack_b->size != 0)
		pa(stack_a, stack_b);
}

void	chunks(t_stack *stack_a, t_stack *stack_b)
{
	int min;
	int max;

	min = smallest_number(stack_a);
	max = biggest_number(stack_a);
	ft_printf("%d%d\n", min, max);
}

void	sort_algo(t_stack *stack_a, t_stack *stack_b)
{
	int pos;

	pos = 0;
	while (stack_a->size != 0)
	{
		pos = smallest_index(stack_a);
		while (pos > 0 && pos < stack_a->size)
		{
			if (pos > stack_a->size / 2)
			{
				rra(stack_a);
				pos++;
			}
			if (pos <= stack_a->size / 2)
			{	
				ra(stack_a);
				pos--;
			}
		}
		pb(stack_a, stack_b);
	}
	while (stack_b->size != 0)
		pa(stack_a, stack_b);
}
