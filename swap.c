/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:01:04 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/11 16:54:03 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int tmp;

    if (stack->size < 2)
        return ;
    tmp = stack->pointer[0];
    stack->pointer[0] = stack->pointer[1];
    stack->pointer[1] = tmp;
}

void	sa(t_stack *stack_a)
{
	swap(stack_a);
}

void	sb(t_stack *stack_b)
{
	swap(stack_b);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
    swap(stack_a);
    swap(stack_b);
}