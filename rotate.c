/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:03:12 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/12 13:35:50 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = stack->pointer[0];
	while (i < stack->size)
	{
		stack->pointer[i] = stack->pointer[i + 1];
		i++;
	}
	stack->pointer[i - 1] = tmp;
}

void	ra(t_stack *stack_a)
{	
	rotate(stack_a);
	ft_printf("ra\n");
}
void	rb(t_stack *stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}
void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
