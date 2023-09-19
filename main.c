/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:42:35 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/19 15:39:05 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    //char *argv[5] = {"program","23","12","5 12"};
    t_stack *stack;
    stack = malloc(sizeof(t_stack));
    int i;
    i = -1;
    if(argc < 1)
        return (0);
    init_stack_data(stack, argv);
    printf("A \t B \n");
    //pa(stack);
    while (++i < 9)
    {
        printf("%d \t %d \n",stack->stack_a[i],stack->stack_b[i]);
    }
}