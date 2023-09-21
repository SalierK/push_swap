/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:50:06 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/21 15:07:39 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *stack)
{
    int i;

    i = -1;
    while (++i + 1 < stack->size_stacks)
    {
        if(stack->stack_a[i] < stack->stack_a[i + 1])
            continue;
        return (0);
    }
    printf("Sıralı");
    return (1);
}

void short_sort(t_stack *stack)
{
    if(stack->size_stacks == 2)
        ra(stack);
    if(stack->size_stacks == 3)
        short_three(stack);
    if(stack->size_stacks == 4)
        short_four(stack);
    if(stack->size_stacks == 5)
        short_five(stack);
}
