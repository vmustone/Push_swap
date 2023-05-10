/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:21:12 by vmustone          #+#    #+#             */
/*   Updated: 2023/05/09 19:29:34 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	duplicate(char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strncmp(argv[i], "./push_swap", 1) == 0 || argv[i] == 0)
		i++;
	while (argv[i] != '\0')
	{
		j = 0;
		if (ft_strncmp(argv[0], "./push_swap", 1) == 0)
			j++;
		while (argv[j] != '\0')
		{
			if ((argv[i] != argv[j]) && (ft_atoi(argv[i]) == ft_atoi(argv[j])))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	is_number(char *argv)
{
	int	i;

	i = 0;
	if ((argv[i] == '+' || argv[i] == '-') && argv[i + 1] != '\0')
		i++;
	while (argv[i] && ft_isdigit(argv[i]))
		i++;
	if (argv[i] != '\0' && !ft_isdigit(argv[i]))
		return (0);
	return (1);
}

static int	zeros(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	min_max(char *argv)
{
	long long int	num;

	num = ft_atoll(argv);
	if (num < -2147483648 || num > 2147483647)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	return (1);
}

int	valid_input(char **argv)
{
	int	i;
	int	nbr_zeros;

	i = 0;
	nbr_zeros = 0;
	if (ft_strncmp(argv[i], "./push_swap", 1) == 0)
	i++;
	while (argv[i] != NULL)
	{
		if (!is_number(argv[i]))
			return (0);
		if (zeros(argv[i]))
			nbr_zeros++;
		if (min_max(argv[i]) == 0)
			return (0);
		i++;
	}
	if (!duplicate(argv))
		return (0);
	return (1);
}
