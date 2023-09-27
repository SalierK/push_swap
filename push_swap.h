/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:25:35 by kkilitci          #+#    #+#             */
/*   Updated: 2023/09/27 17:58:14 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_stack
{
    int     *stack_a;
    int     *stack_b;
    int     size_stacks;
	int		error_state;
    char     **argv;
} t_stack;

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int    init_stack_data(t_stack *stack, char **argv);
char	**ft_split(char const *s, char c);
char	**ft_wordput(const char *s, char c, char **strs);
int     ft_wordcount(const char *s, char c);
int     have_space(char *arguman);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void     init_space_arg(t_stack *stack, char **argv);
int	    ft_atoi(char *str, t_stack *stack);
void	*ft_calloc(size_t count, size_t size);
void    init_index(t_stack *stack);
void    edit_b_for_pb(int *stack_a, int *stack_b, int lenb, int lena);
int     pa(int *stack_a, int *stack_b);
void    ss(t_stack *stack);
int     pb(int *stack_a, int *stack_b);
void    sb(t_stack *stack);
void    sa(t_stack *stack);
void    ra(t_stack *stack);
void    bubbleSort(t_stack *stack, int n);
void	ft_bzero(t_stack *stack, size_t n);
void    radix_sort(t_stack *stack);
int     get_max_bits(t_stack *stack);
int     isEmpty(t_stack *stack);
int     is_sorted(t_stack *stack);
void    short_sort(t_stack *stack);
void	short_three(t_stack *stack);
void	short_four(t_stack *stack);
void	short_five(t_stack *stack);
void 	swap_for_p(int *stack_a, int *stack_b, int lena);
int 	check_doubles(t_stack *stack);
size_t	ft_strlen(const char *s);
#endif