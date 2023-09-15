/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fon1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:19:17 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/15 18:49:29 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(int *stack_a, int *stack_b, int argc)
{
	if(argc >= 2)
	{
		int b;
   		b = stack_a[0];
    	stack_a[0] = stack_a[1];
    	stack_a[1] = b;
	}
}

void sb(int *stack_a, int *stack_b, int argc)
{
    if(argc >= 2)
    {
        int b;
        b = stack_b[0];
        stack_b[0] = stack_b[1];
        stack_b[1] = b;
		
    }

}

void pb(int *stack_a, int *stack_b, int argc)
{
	int i;
	int j;
	int lena;
	int lenb;
	
	i = 0;
	lenb = 0;
	lena = 0;
	while(stack_b[i++])
		lenb++;
	i = 0;
	while(stack_a[i++])
		lena++;
	i = 0;
	if(lenb == 0)
	{
		stack_b[0] = stack_a[0];
		while (stack_a[i + 1])
		{
			stack_a[i] = stack_a[i + 1];
			if(i == lena -1)
				break;
			i++;
		}
		stack_a[i] = 0;
	}
	else
		edit_b_for_pb(stack_a, stack_b, lenb, lena);
}

void pa(int *stack_a, int *stack_b, int argc)
{
	pb(stack_b, stack_a, argc);
}

void ss(int *stack_a, int *stack_b, int argc)
{
    sa(stack_a, stack_a, argc);
    sb(stack_a, stack_a, argc);
}