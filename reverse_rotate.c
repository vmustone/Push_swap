/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:17:06 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/14 15:51:55 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->ptr[stack->size - 1];
	while (i < stack->size)
	{
		stack->ptr[stack->size - 1 - i] = stack->ptr[stack->size - i - 2];
		i++;
	}
	stack->ptr[0] = tmp;
}

void	rra(t_stack *stack_a)
{	
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}
void	rrb(t_stack *stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}
void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
