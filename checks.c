/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:50:26 by kkilitci          #+#    #+#             */
/*   Updated: 2023/10/01 16:27:06 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_doubles(t_stack *stack)
{
	int	i;
	int	j;

	i = -1;
	while (stack->stack_a[++i])
	{
		j = i + 1;
		while (stack->stack_a[j])
		{
			if (stack->stack_a[i] == stack->stack_a[j])
				return (1);
			j++;
		}
	}
	return (0);
}

void	ft_free_temp(char **temp)
{
	int	i;

	i = -1;
	while (temp[++i])
		free(temp[i]);
	free(temp);
}
