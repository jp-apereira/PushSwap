/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:40:06 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/01 11:39:10 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


# include "push_swap.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

#define MAX_SORT 100000

void	sb(int *stack_b, int wrt);
void	sa(int *stack_a, int wrt);
void	ss(int *stack_a, int *stack_b, int wrt);

void	ra(int *stack_a, int wrt);
void	rb(int *stack_a, int wrt);
void	rra(int *stack_a, int wrt);
void	rr(int *stack_a, int *stack_b, int wrt);
void	rrr(int *stack_a, int *stack_b, int wrt);


void    pb(int *stack_a, int *stack_b, int wrt);
void    pa(int *stack_a, int *stack_b, int wrt);


int	ft_atoi(const char *str);
int	ft_duplicate(char **s);
int	ft_is_all_number(char **s);
void	errors(char **av);


void  sort_three(int *stack_a);

#endif