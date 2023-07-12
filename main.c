/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:44:54 by jalves-p          #+#    #+#             */
/*   Updated: 2023/07/12 16:26:02 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_lst	*a;
	t_lst	*b;

	b = NULL;
	if (ac < 2)
		exit(EXIT_FAILURE);
	if (check_errors(ac, av) == -1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	a = create_stack(ac, av);
	if (stack_sorted(&a))
	{
		free(a);
		free(b);
		exit(EXIT_SUCCESS);
	}
	define_sort(&a, &b, ac);
	free(a);
	free(b);
	return (0);
}
