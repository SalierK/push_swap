/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:42:35 by kkilitci          #+#    #+#             */
/*   Updated: 2023/10/05 05:05:27 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (argc < 1)
	{
		write(2, "Error\n", 7);
		return (-1);
	}
	if (!init_stack_data(stack, argv))
	{
		write(2, "Error\n", 7);
		return (-1);
	}
	if (!is_sorted(stack->stack_a, stack->size_stacks))
	{
		if (stack->size_stacks <= 5)
			short_sort(stack);
		else
			radix_sort(stack);
	}
	else
	{
		return (0);
	}
}

void	ft_double_sign(char **argv, t_stack *stack)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '-' && argv[i][j +1] == '-')
				|| (argv[i][j] == '+' && argv[i][j +1] == '+'))
			{
				stack->error_state = 1;
			}
			j++;
		}
		i++;
	}
}
