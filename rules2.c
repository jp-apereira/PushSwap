/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:29:27 by jalves-p          #+#    #+#             */
/*   Updated: 2023/07/12 10:51:40 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_lst **stack)
{
	t_lst	*first;
	t_lst	*last;

	first = *stack;
	*stack = (*stack)->next;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	ft_rrotate(t_lst **stack)
{
	t_lst	*temp;

	temp = *stack;
	while ((*stack)->next)
		*stack = (*stack)->next;
	(*stack)->next = temp;
	while (temp->next != *stack)
		temp = temp->next;
	temp->next = NULL;
}

void	ra(t_lst **stack_a)
{
	ft_rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_lst **stack_b)
{
	ft_rotate(stack_b);
	write(1, "rb\n", 3);
}
