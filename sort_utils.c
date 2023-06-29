/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:54:25 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 14:14:26 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_move	neighbour_high(t_lst *a, int num_b)
{
	t_move	max;
	t_move	curr;
	int		i;
	int		size;

	i = 0;
	max.found = false;
	size = ft_lstsize(a);
	while (a)
	{
		curr = (t_move){.index = i, .num = a->content, .moves = i, .to_top = true,
			.found = true, .node = a};
		if (curr.index > size / 2)
			curr.moves = size - i + 1;
		if ((max.num > a->content && a->content > num_b) || (max.found == false
				&& a->content > num_b))
			max = curr;
		a = a->next;
		i++;
	}
	return (max);
}

t_move	neighbour_lower(t_lst *a, int num_b)
{
	t_move	min;
	t_move	curr;
	int		i;
	int		size;

	i = 0;
	min.found = false;
	size = ft_lstsize(a);
	while (a)
	{
		curr = (t_move){.index = i, .num = a->content, .a = i, .to_top = true,
			.found = true, .node = a};
		if (curr.b > size / 2)
			curr.b = size - i;
		if ((min.num < a->content && a->content < num_b) || (min.found == false
				&& a->content < num_b))
			min = curr;
		a = a->next;
		i++;
	}
	return (min);
}
t_move	find_best_nei(t_lst *s, int num)
{
	t_move	min;
	t_move	max;

	min = neighbour_lower(s, num);
	max = neighbour_high(s, num);
	if (min.found == false)
		return (max);
	else if (max.found == false)
		return (min);
	else if (min.moves < max.moves)
		return (min);
	else if (min.moves > max.moves)
		return (max);
	return (max);
}

t_move	numb_moves(t_lst *a, t_lst *b)
{
	t_move	min;
	t_move	curr;
	t_move	best;
	int		i;
	int		size;

	i = 0;
	min.found = false;
	min.neighbour = NULL;
	size = ft_lstsize(b);
	while (b)
	{
		curr = (t_move){.index = i, .num = b->content, .b = i, .to_top = true,
			.found = true, .node = b};
		if (curr.b > size / 2)
			curr.b = size - i + 1;
		best = find_best_nei(a, b->content);
		curr.a = best.moves;
		curr.moves = curr.a + curr.b;
		if (!min.found || min.moves > curr.moves)
		{
			free(min.neighbour);
			min = curr;
			min.neighbour = malloc(sizeof(t_move));
			*min.neighbour = best;
		}
		b = b->next;
		i++;
	}
	return (min);
}
