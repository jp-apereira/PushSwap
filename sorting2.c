/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:46:40 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 14:24:52 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_rest(t_lst **a, t_lst **b)
{
	int	size;

	size = ft_lstsize(*a);
	while ((size - 5) > 0)
	{
		pb(a, b);
		size--;
	}
	sort_five(a, b);
	while (*b)
	{
		move_to_top(a, b);
		pa(a, b);
	}
	reorganize(a, ft_lstsize(*a));
}
