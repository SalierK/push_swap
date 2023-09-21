/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:47:34 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/21 11:31:54 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int argv_size_calculate(char **argv)
{
    int i;
    int j;
    int count;
    char **temp;
    
    i = 0;
    count = 0;
    while (argv[++i])
    {
        if(have_space(argv[i]))
        {
            temp = ft_split(argv[i],32);
            j = -1;
            while (temp[++j])
            {
                count++;
            }
        }   
        else
            count++;
    }
    i = 0;
    return (count);
}

int have_space(char *arguman)
{
    int i;
    
    i = -1;
    while (arguman[++i])
    {
        if(arguman[i] == 32)
            return (1);
    }
    return (0);
    
}

void init_stack_data(t_stack *stack,char **argv)
{
    stack->size_stacks = argv_size_calculate(argv);
    stack->stack_a = ft_calloc(sizeof(int) , stack->size_stacks + 1);
    stack->stack_b = ft_calloc(sizeof(int) , stack->size_stacks + 1);
    init_space_arg(stack, argv);
    init_index(stack);
}

void init_index(t_stack *stack)
{
    int	i;
	int j;

	i = 0;
    while (i < stack->size_stacks)
	{
		stack->stack_b[i] = stack->stack_a[i];
		i++;
	}
	bubbleSort(stack, stack->size_stacks);
	i = -1;
	while (++i < stack->size_stacks)
	{
		j = -1;
		while (++j < stack->size_stacks)
		{
			if(stack->stack_a[i] == stack->stack_b[j])
				stack->stack_a[i] = j + 1;
		}
	}
	ft_bzero(stack, stack->size_stacks);
}

void init_space_arg(t_stack *stack, char **argv)
{
    int i;
    int j;
    int stack_index;
    char **temp;
    
    i = 0;
    stack_index = 0;
    while (argv[++i])
    {
        if(have_space(argv[i]))
        {
            temp = ft_split(argv[i],32);
            j = -1;
            while (temp[++j])
            {
                stack->stack_a[stack_index] = ft_atoi(temp[j]);
                stack_index++;
            }
        }   
        else
            stack->stack_a[stack_index++] = ft_atoi(argv[i]);
    }
}
