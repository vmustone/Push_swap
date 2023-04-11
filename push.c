/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:02:10 by vmustone          #+#    #+#             */
/*   Updated: 2023/04/11 16:02:43 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_a(t_stack *stack_a, t_stack *stack_b)
{
    if (stack_b->size < 2)
        return ;
    stack_a->pointer[0] = stack_b->pointer[0];
    stack_a->size++;
    stack_b->size--;
}

void    push_b(t_stack *stack_a, t_stack *stack_b)
{
    if (stack_a->size < 2)
        return ;
    stack_b->pointer[0] = stack_a->pointer[0];
    stack_b->size++;
    stack_a->size--;
}