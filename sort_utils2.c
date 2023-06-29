/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:09:25 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 15:11:11 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_idx(t_lst **stack, int val)
{
	t_lst	*curr;
	int		index;

	curr = *stack;
	index = 0;
	while (curr)
	{
		if (curr->content == val)
			return (index);
		index++;
		curr = curr->next;
	}
	return (-1);
}

void	move_to_top(t_lst **a, t_lst **b)
{
	t_move	num;
	t_move	neighbour;
	int		size_a;
	int		size_b;
	int		same_moves;

	size_a = ft_lstsize(*a);
	size_b = ft_lstsize(*b);
	num = numb_moves((*a), (*b));
	neighbour = *num.neighbour;
	if (num.b < num.a)
		same_moves = num.b;
	else
		same_moves = num.a;
	if (same_moves > 0 && (neighbour.index > size_a / 2) == (num.index > size_b
			/ 2))
	{
		while (--same_moves > 0)
		{
			if (num.index > size_b / 2)
				rrr(a, b);
			else
				rr(a, b);
		}
		num.index = find_idx(b, num.num);
		neighbour.index = find_idx(a, neighbour.num);
	}
	while ((*b)->content != num.num)
	{
		if (num.index > size_b / 2)
			rrb(b);
		else
			rb(b);
	}
	if (neighbour.to_top == false)
	{
		while (neighbour.node->next)
		{
			if (neighbour.index > size_a / 2)
				rra(a);
			else
				ra(a);
		}
	}
	else
	{
		while ((*a)->content != neighbour.num)
		{
			if (neighbour.index > size_a / 2)
				rra(a);
			else
				ra(a);
		}
	}
	free(num.neighbour);
}

void	reorganize(t_lst **a, int size_list)
{
	int	smaller;
	int	index;

	smaller = encontrar_menor(*a);
	index = find_idx(a, smaller);
	while ((*a)->content != smaller)
	{
		if (index > size_list / 2)
			rra(a);
		else
			ra(a);
	}
}

void	smallest_top(t_lst **a, int size_list, int index)
{
	int i;

	i = index;
	if (index + 1 <= (size_list / 2))
	{
		while (i > 0)
		{
			ra(a);
			i--;
		}
	}
	else if (index + 1 > (size_list / 2))
	{
		while (i < size_list)
		{
			rra(a);
			i++;
		}
	}
}
