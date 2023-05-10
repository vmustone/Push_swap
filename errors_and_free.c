/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_and_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:37:43 by vmustone          #+#    #+#             */
/*   Updated: 2023/05/10 17:33:58 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(t_stack *stack_a, t_stack *stack_b, char **argv)
{
	int	i;

	i = 0;
	free(stack_a->ptr);
	free(stack_b->ptr);
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	exit (0);
}

void	errors(char **argv)
{
	int	i;

	i = 0;
	write(2, "Error\n", 6);
	if (argv)
	{
		while (argv[i] != NULL)
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
	exit (1);
}
