/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:29:50 by jalves-p          #+#    #+#             */
/*   Updated: 2023/07/12 16:09:42 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_lst **stack_a, t_lst **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	write(1, "rr\n", 3);
}

void	rrr(t_lst **stack_a, t_lst **stack_b)
{
	ft_rrotate(stack_a);
	ft_rrotate(stack_b);
	write(1, "rrr\n", 4);
}

void	rra(t_lst **stack_a)
{
	ft_rrotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_lst **stack_b)
{
	ft_rrotate(stack_b);
	write(1, "rrb\n", 4);
}
