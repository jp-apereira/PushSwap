/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:29:03 by jalves-p          #+#    #+#             */
/*   Updated: 2023/07/12 10:51:43 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_lst **a)
{
	t_lst	*temp;

	temp = (*a)->next;
	(*a)->next = (*a)->next->next;
	temp->next = *a;
	*a = temp;
	write(1, "sa\n", 3);
}

void	sb(t_lst **b)
{
	t_lst	*temp;

	temp = (*b)->next;
	(*b)->next = (*b)->next->next;
	temp->next = *b;
	*b = temp;
	write(1, "sb\n", 3);
}

void	ss(t_lst **stack_a, t_lst **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
