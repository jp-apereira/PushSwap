/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:30:24 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/13 16:32:33 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*new_node;

	if (*stack_a == NULL)
		return ;
	new_node = *stack_a;
	*stack_a = (*stack_a)->next;
	new_node->next = *stack_b;
	new_node->prev = NULL;
	if (*stack_b != NULL)
		(*stack_b)->prev = new_node;
	*stack_b = new_node;
	write(1, "pb\n", 3);
}

void	pa(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*new_node;

	if (*stack_b == NULL)
		return ;
	new_node = *stack_b;
	*stack_b = (*stack_b)->next;
	new_node->next = *stack_a;
	new_node->prev = NULL;
	if (*stack_a != NULL)
		(*stack_a)->prev = new_node;
	*stack_a = new_node;
	write(1, "pb\n", 3);
}
