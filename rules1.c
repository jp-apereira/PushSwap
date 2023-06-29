/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:29:03 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/13 11:53:52 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_lst *stack_b)
{
	t_lst	*temp;

	temp = stack_b->next;
	stack_b->next = temp->next;
	temp->next = stack_b;
	stack_b->prev = temp;
	temp->prev = NULL;
	write(1, "sb\n", 3);
}

void	sa(t_lst *stack_a)
{
	t_lst	*temp;

	temp = stack_a->next;
	stack_a->next = temp->next;
	temp->next = stack_a;
	stack_a->prev = temp;
	temp->prev = NULL;
	write(1, "sa\n", 3);
}

void	ss(t_lst *stack_a, t_lst *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
