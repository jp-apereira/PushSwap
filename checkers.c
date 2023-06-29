/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:34:50 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 13:49:04 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	define_sort(t_lst **stack_a, t_lst **stack_b, int ac)
{
	if (!*stack_a || !(*stack_a)->next)
		return ;
	else if (ac == 3)
		sort_two(stack_a);
	else if (ac == 4)
		sort_three(stack_a);
	else if (ac <= 6)
		sort_five(stack_a, stack_b);
	else
		sort_rest(stack_a, stack_b);
}

int	stack_sorted(t_lst **stack)
{
	int		val;
	t_lst	*curr;

	if (!stack || !(*stack)->next)
		return (1);
	val = (*stack)->content;
	curr = (*stack)->next;
	while (curr)
	{
		if (curr->content < val)
			return (0);
		val = curr->content;
		curr = curr->next;
	}
	return (1);
}

t_lst	*create_stack(int ac, char **av)
{
	int		i;
	t_lst	*node;
	t_lst	*start;

	start = NULL;
	i = 1;
	while (i != ac)
	{
		node = ft_addback(ft_atoi(av[i]));
		if (start == NULL)
			start = node;
		else
			ft_lstadd_back(&start, node);
		i++;
	}
	return (start);
}
