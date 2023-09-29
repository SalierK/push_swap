/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fon2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:17:36 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/29 14:48:59 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack *stack)
{
	int i;
	int first_number;
	int len_b;
	
	write(1, "ra\n", 4);
	i = 0;
	len_b = 0;
	first_number = stack->stack_a[0];
	while (stack->stack_a[len_b])
		len_b++;
	while (i < len_b)
	{
		stack->stack_a[i] = stack->stack_a[i + 1];
		i++;
	}
	stack->stack_a[i -1] = first_number; 
}
void	short_three(t_stack *stack)
{
	int	max;
	int	med;

	med = (stack->stack_a[0] + stack->stack_a[1] + stack->stack_a[2]) / 3;
	max = med + 1;
	if (stack->stack_a[0] == max)
		ra(stack);
	if (stack->stack_a[0] == med)
		sa(stack);
	if (stack->stack_a[0] == max)
		ra(stack);
	if (!is_sorted(stack->stack_a, stack->size_stack_a))
		sa(stack);
	if (!is_sorted(stack->stack_a, stack->size_stack_a))
		ra(stack);
}

void	short_four(t_stack *stack)
{
	int	i;
	int	size;

	i = 0;
	size = stack->size_stacks;
	while (i < size)
	{
		if (stack->stack_a[0] == 1|| stack->stack_a[0] == 2)
			pb(stack->stack_a, stack->stack_b, stack);
		else
			ra(stack);
		i++;
	}
	if (!is_sorted(stack->stack_a, stack->size_stack_a))
		sa(stack);
	if (is_sorted(stack->stack_b, stack->size_stack_b))
		sb(stack);
	pa(stack->stack_b, stack->stack_a, stack);
	pa(stack->stack_b, stack->stack_a, stack);
}

void	short_five(t_stack *stack)
{
	int	i;
	int	size;

	i = 0;
	size = stack->size_stacks;
	while (i < size)
	{
		if (stack->stack_a[0] == 1 || stack->stack_a[0] == 2)
			pb(stack->stack_a, stack->stack_b, stack);
		else
			ra(stack);
		i++;
	}
	if (!is_sorted(stack->stack_a, stack->size_stack_a))
		short_three(stack);
	if (is_sorted(stack->stack_b, stack->size_stack_b))
		sb(stack);
	pa(stack->stack_b, stack->stack_a, stack);
	pa(stack->stack_b, stack->stack_a, stack);
}
