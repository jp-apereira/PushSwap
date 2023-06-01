/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:45:14 by jalves-p          #+#    #+#             */
/*   Updated: 2023/05/31 10:45:14 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	ft_atoi(const char *str)
{
	long int	i;
	long int	total;
	int			sign;

	total = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = (str[i] != '-') - (str[i] == '-');
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total *= 10;
		total += str[i++] - 48;
	}
	total *= sign;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (total);
}

int	ft_duplicate(char **s)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
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

void	errors(char **av)
{
	if (ft_duplicate(av) || ft_is_all_number(av))
	{
		ft_printf("Error\n");
		exit(1);
	}
	return ;
}