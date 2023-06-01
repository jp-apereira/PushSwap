/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:30:24 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/01 09:34:25 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(int *stack_a, int *stack_b, int wrt)
{
	int	i;

	i = 0;
	while (stack_b[i] != MAX_SORT)
		i++;
	stack_b[i + 1] = MAX_SORT;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	stack_a[0] = 0;
	i = 0;
	while (stack_a[++i] != MAX_SORT)
		stack_a[i - 1] = stack_a[i];
	stack_a[i - 1] = MAX_SORT;
	if (wrt)
		write(1, "pb\n", 3);
}

void	pa(int *stack_a, int *stack_b, int wrt)
{
	int	i;

	i = 0;
	while (stack_a[i] != MAX_SORT)
		i++;
	stack_a[i + 1] = MAX_SORT;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	stack_b[0] = 0;
	i = 0;
	while (stack_b[++i] != MAX_SORT)
		stack_b[i - 1] = stack_b[i];
	stack_b[i - 1] = MAX_SORT;
	if (wrt)
		write(1, "pa\n", 3);
}
