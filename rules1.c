/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:29:03 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/01 09:34:35 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(int *stack_b, int wrt)
{
	int	temp;

	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
	if (wrt)
		write(1, "sb\n", 3);
}

void	sa(int *stack_a, int wrt)
{
	int	temp;

	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
	if (wrt)
		write(1, "sa\n", 3);
}

void	ss(int *stack_a, int *stack_b, int wrt)
{
	int temp;

	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = temp;
	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = temp;
	if (wrt)
		write(1, "ss\n", 3);
}