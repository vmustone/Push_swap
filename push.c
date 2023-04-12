/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:02:10 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/12 13:36:41 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_stack *stack_a, t_stack *stack_b)
{
    int i;

    i = 0;
    if (stack_b->size == 0)
        return ;
    stack_a->pointer[stack_a->size] = stack_b->pointer[0];
    stack_a->size++;
    stack_b->size--;
    while (i < stack_b->size)
    {
        stack_b->pointer[i] = stack_b->pointer[i + 1];
        i++;
    }
    ft_printf("pa\n");
}

void    pb(t_stack *stack_a, t_stack *stack_b)
{
    int i;

    i = 0;
    if (stack_a->size == 0)
        return ;
    stack_b->pointer[stack_b->size] = stack_a->pointer[0];
    stack_b->size++;
    stack_a->size--;
    while (i < stack_a->size)
    {
        stack_a->pointer[i] = stack_a->pointer[i + 1];
        i++;
    }
    ft_printf("pb\n");
}
