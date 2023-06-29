/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:29:27 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 13:28:03 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_lst **stack_a)
{
	t_lst	*temp;
	t_lst	*current;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	current = *stack_a;
	while (current->next != NULL)
		current = current->next;
	temp->next = NULL;
	temp->prev = current;
	current->next = temp;
	write(1, "ra\n", 3);
}

void	rb(t_lst **stack_b)
{
	t_lst	*temp;
	t_lst	*current;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	current = *stack_b;
	while (current->next != NULL)
		current = current->next;
	temp->next = NULL;
	temp->prev = current;
	current->next = temp;
	write(1, "rb\n", 3);
}

void	rra(t_lst **stack_a)
{
	t_lst	*temp;
	t_lst	*current;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	current = *stack_a;
	while (current->next != NULL)
		current = current->next;
	temp = current->prev;
	temp->next = NULL;
	current->prev = NULL;
	current->next = *stack_a;
	(*stack_a)->prev = current;
	*stack_a = current;
	write(1, "rra\n", 4);
}

void	rrb(t_lst **stack_b)
{
	t_lst	*temp;
	t_lst	*current;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	current = *stack_b;
	while (current->next != NULL)
		current = current->next;
	temp = current->prev;
	temp->next = NULL;
	current->prev = NULL;
	current->next = *stack_b;
	(*stack_b)->prev = current;
	*stack_b = current;
	write(1, "rrb\n", 4);
}
