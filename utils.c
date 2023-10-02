/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:57:16 by kkilitci          #+#    #+#             */
/*   Updated: 2023/10/02 23:41:15 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_atoi(char *str, t_stack *stack)
{
	size_t	sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	result *= sign;
	if ((result < -2147483648 && result > 2147483647))
		stack->error_state = 1;
	return (result);
}

void	*ft_calloc(size_t count, size_t size)
{
	char			*dst;
	unsigned int	total;
	unsigned int	i;

	total = count * size;
	dst = malloc(total);
	if (!dst)
		return (NULL);
	i = 0;
	while (total--)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}

void	edit_b_for_pb(int *stack_a, int *stack_b, int lenb, int lena)
{
	int	i;

	i = 0;
	while (stack_b[lenb -1])
	{
		stack_b[lenb] = stack_b[lenb -1];
		if (lenb -1 == 0)
			break ;
		lenb--;
	}
	stack_b[0] = stack_a[0];
	while (stack_a[i + 1])
	{
		stack_a[i] = stack_a[i + 1];
		if (i == lena -1)
			break ;
		i++;
	}
	stack_a[i] = 0;
}

void	ft_bzero(t_stack *stack, size_t n)
{
	int	*p;

	p = stack->stack_b;
	while (n)
	{
		*p++ = 0;
		--n;
	}
}

size_t	ft_strlen(const char *s)
{
	int		i;
	int		retval;

	i = -1;
	retval = 0;
	while (s[++i] == 32)
		continue ;
	while (s[i++])
		retval++;
	return ((size_t)retval);
}
