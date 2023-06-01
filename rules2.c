/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:29:27 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/01 11:31:03 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *stack_a, int wrt)
{
	int	i;
	int	temp;

	i = -1;
	temp = stack_a[0];
	while (stack_a[++i] != MAX_SORT)
		stack_a[i] = stack_a[i + 1];
	stack_a[i - 1] = temp;
	stack_a[i] = MAX_SORT;
	if (wrt)
		write(1, "ra\n", 3);
}

void	rb(int *stack_b, int wrt)
{
	int	i;
	int	temp;

	i = -1;
	temp = stack_b[0];
	while (stack_b[++i] != MAX_SORT)
		stack_b[i] = stack_b[i + 1];
	stack_b[i - 1] = temp;
	stack_b[i] = MAX_SORT;
	if (wrt)
		write(1, "rb\n", 3);
}

void	rra(int *stack_a, int wrt)
{
	int	i;
	int	temp;

	i = 0;
	while (stack_a[i] != MAX_SORT)
		i++;
	temp = stack_a[i - 1];
	i--;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[i - 1] = temp;
	stack_a[i] = MAX_SORT;
	if (wrt)
		write(1, "ra\n", 3);
}

void	rrb(int *stack_b, int wrt)
{
	int	i;
	int	temp;

	i = 0;
	while (stack_b[i] != MAX_SORT)
		i++;
	temp = stack_b[i - 1];
	i--;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = temp;
	if (wrt)
		write(1, "rrb\n", 4);
}
