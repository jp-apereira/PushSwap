/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:44:54 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 15:35:38 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_lst	*a;
	t_lst	*b;

	b = NULL;
	if (ac < 2)
		exit(1);
	if (ac > 1)
	{
		if (check_errors(av) == -1)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		a = create_stack(ac, av);
		define_sort(&a, &b, ac);
	}
	if (stack_sorted(&a))
	{
		exit(0);
	}
}
