/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:01:04 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/12 13:35:20 by vmustone         ###   ########.fr       */
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
    ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	swap(stack_b);
    ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_printf("ss\n");
}