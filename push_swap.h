/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:54:43 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/15 13:40:03 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

void	init_stack_data(char **argv, int argc ,int *stack_a ,int *stack_b);
int		ft_atoi(char *str);
void	*ft_calloc(size_t count, size_t size);

void sa(int *stack_a, int *stack_b, int argc);
void sb(int *stack_a, int *stack_b, int argc);
void ss(int *stack_a, int *stack_b, int argc);

#endif