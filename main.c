/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:47:01 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/15 16:59:33 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void init_stack_data(char **argv, int argc, int *stack_a, int *stack_b)
{
	int i;

	i = 0;
	while (i < argc -1)
	{
		stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

int main(int argc, char **argv)
{
    int *stack_a;
    int *stack_b;
    int i;
    
	stack_a = ft_calloc(sizeof(int) , argc -1);
	stack_b = ft_calloc(sizeof(int) , argc -1);
	i = -1;
	init_stack_data(argv, argc, stack_a, stack_b);
	sa(stack_a, stack_b, argc);
	while(stack_a[++i])
	{
		printf("%d  \t  \t %d \n",stack_a[i] , stack_b[i]);
	}

}
