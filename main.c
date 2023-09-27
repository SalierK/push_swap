/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:42:35 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/27 17:49:47 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    //char *argv[8] = {"program","23","13","5 12","45"};
    t_stack *stack;
    stack = malloc(sizeof(t_stack));
    int i;
    i = -1;
    if (argc < 1)
        return (0);
    if (!init_stack_data(stack, argv))
        return (0);
    printf("\n --%s--\n",argv[4]);
    // printf("\tA\tB\n");
    // while (++i < stack->size_stacks)
    // {
    //     printf("\t%d\t%d\n",stack->stack_a[i],stack->stack_b[i]);
    // }
    // printf("-----%d--------",is_sorted(stack));
    if (!is_sorted(stack))
    {
        if(stack->size_stacks <= 5)
            short_sort(stack);
        else
            radix_sort(stack);
    }

    //i = -1;
    // printf("\n");
    // printf("\tA\tB\n");
    // while (++i < stack->size_stacks)
    // {
    //     printf("\t%d\t%d\n",stack->stack_a[i],stack->stack_b[i]);
    // }
}
