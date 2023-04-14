/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:02:10 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/14 18:00:13 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_stack *stack_a, t_stack *stack_b)
{
    int i;

    i = 0;
    if (stack_b->size == 0)
        return ;
    stack_a->ptr[stack_a->size] = stack_b->ptr[0];
    stack_a->size++;
    stack_b->size--;
    while (i < stack_b->size)
    {
        stack_b->ptr[i] = stack_b->ptr[i + 1];
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
    stack_b->ptr[0] = stack_a->ptr[0];
    stack_b->size++;
    stack_a->size--;
    while (i < stack_b->size)
    {
        stack_b->ptr[i + 1] = stack_b->ptr[i];
        i++;
    }
    i = 0;
    while (i < stack_a->size)
    {
        stack_a->ptr[i] = stack_a->ptr[i + 1];
        i++;
    }
    ft_printf("pb\n");
}
