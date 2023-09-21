/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fon2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:17:36 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/21 13:16:22 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack *stack)
{
    int i;
    int first_number;
	int len_b;
	
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
