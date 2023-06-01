/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:46:40 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/01 12:07:10 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(int *stack_a)
{
	if (stack_a[0] > stack_a[1] && stack_a[0] < stack_a[2])
		sa(stack_a, 1);
	else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[2] != MAX_SORT)
	{
		sa(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[0] > stack_a[2])
		ra(stack_a, 1);
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[2] != MAX_SORT)
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (stack_a[0] < stack_a[1] && stack_a[0] > stack_a[2])
		rra(stack_a, 1);
}


void	sort_five(int *stack_a, int *stack_b)
{
  
}