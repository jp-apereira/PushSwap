/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:01:53 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 15:36:28 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_duplicate(char **s)
{
	int	i;
	int	j;

	i = 1;
	if (!s || !(*s))
		return (1);
	while (s[i])
	{
		j = 1;
		while (j < i)
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_all_number(char **s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			if (!(s[i][j] >= 48 && s[i][j] <= 57))
				return (1);
		}
		i++;
	}
	return (0);
}

int	check_errors(char **av)
{
	int		i;
	long	tmp;

	i = 0;
	while (av[++i])
	{
		tmp = ft_atoi(av[i]);
		if (ft_duplicate(av) || ft_is_all_number(av) || tmp > INT_MAX
			|| tmp < INT_MIN)
			return -1;
	}
	return 0;
}
