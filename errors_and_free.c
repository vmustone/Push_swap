/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_and_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:37:43 by vmustone          #+#    #+#             */
/*   Updated: 2023/05/10 14:19:26 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stack *stack_a, t_stack *stack_b)
{
	free(stack_a->ptr);
	free(stack_b->ptr);
	exit (0);
}

void	errors(char **argv)
{
	write(2, "Error\n", 6);
	exit (1);
}
