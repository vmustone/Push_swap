/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:42:37 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/14 16:18:42 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm_three_numbers(t_stack *stack_a)
{
	if (stack_a->ptr[0] < stack_a->ptr[1] && stack_a->ptr[1] < stack_a->ptr[2])
		return ;
	else if (stack_a->ptr[0] > stack_a->ptr[1] && stack_a->ptr[0] < stack_a->ptr[2])
		sa(stack_a);
	else if (stack_a->ptr[0] > stack_a->ptr[1] && stack_a->ptr[1] > stack_a->ptr[2])
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (stack_a->ptr[0] > stack_a->ptr[1] && stack_a->ptr[1] < stack_a->ptr[2])
		ra(stack_a);
	else if (stack_a->ptr[0] < stack_a->ptr[1] && stack_a->ptr[0] < stack_a->ptr[2])
	{	
		sa(stack_a);
		ra(stack_a);
	}
	else if (stack_a->ptr[0] < stack_a->ptr[1] && stack_a->ptr[1] > stack_a->ptr[0])
		rra(stack_a);
}

void	algorithm_five_numbers(t_stack *stack_a, t_stack *stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	print_stack(stack_a);
	print_stack(stack_b);
//	algorithm_three_numbers(stack_a);
//	print_stack(stack_a);
//	print_stack(stack_b);
	//pa(stack_a, stack_b);
	//ra(stack_a);
	//pa(stack_a, stack_b);
}