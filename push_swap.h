/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:25:35 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/19 15:30:56 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_stack
{
    int     *stack_a;
    int     *stack_b;
    char     **argv;
} t_stack;

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    init_stack_data(t_stack *stack,char **argv);
char	**ft_split(char const *s, char c);
char	**ft_wordput(const char *s, char c, char **strs);
int     ft_wordcount(const char *s, char c);
int     have_space(char *arguman);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void     init_space_arg(t_stack *stack, char **argv);
void    init_argv(t_stack *stack, char **argv);
int	    ft_atoi(char *str);
void	*ft_calloc(size_t count, size_t size);

void    edit_b_for_pb(t_stack *stack, int lena, int lenb);
void    pa(t_stack *stack);
void    ss(t_stack *stack);
int     pb(t_stack *stack);
void    sb(t_stack *stack);
void    sa(t_stack *stack);

#endif