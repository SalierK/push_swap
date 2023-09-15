/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_fon1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:19:17 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/15 17:07:55 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void pa(int *stack_a, int *stack_b, int argc)
{
	int i;
	int j;
	int len;
	
	i = 0;
	while(stack_a[i])
		len++;
	
}

void ss(int *stack_a, int *stack_b, int argc)
{
    sa(stack_a, stack_a, argc);
    sb(stack_a, stack_a, argc);
}