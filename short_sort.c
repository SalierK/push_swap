/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:50:06 by kkilitci          #+#    #+#             */
/*   Updated: 2023/10/01 16:39:46 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (stack[i] > stack[i + 1] && i != size - 1)
			return (0);
		i++;
	}
	return (1);
}

void	short_sort(t_stack *stack)
{
	if (stack->size_stacks == 2)
		ra(stack);
	if (stack->size_stacks == 3)
		short_three(stack);
	if (stack->size_stacks == 4)
		short_four(stack);
	if (stack->size_stacks == 5)
		short_five(stack);
}
