/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:47:01 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/15 19:31:59 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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

int main(int argcf, char **argt)
{
    int *stack_a;
    int *stack_b;
    int i;
    
	int argc = 7;
	char *argv[9] = {"program","2","12","34","56","37","89"};
	stack_a = ft_calloc(sizeof(int) , argc -1);
	stack_b = ft_calloc(sizeof(int) , argc -1);
	i = -1;
	init_stack_data(argv, argc, stack_a, stack_b);
	pb(stack_a, stack_b, argc);
	pb(stack_a, stack_b, argc);
	pb(stack_a, stack_b, argc);
	pb(stack_a, stack_b, argc);
	pb(stack_a, stack_b, argc);


	while(stack_a[++i])
	{
		printf("  \t  \t %d \n" , stack_b[4]);
	}

}
