/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:09:25 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 13:38:34 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
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

int	ft_lstsize(t_lst *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	encontrar_menor(t_lst *stack_a)
{
	int		menor;
	t_lst	*current;

	menor = stack_a->content;
	current = stack_a->next;
	while (current != NULL)
	{
		if (current->content < menor)
		{
			menor = current->content;
		}
		current = current->next;
	}
	return (menor);
}

int	encontrar_maior(t_lst *stack_a)
{
	int		maior;
	t_lst	*current;

	maior = stack_a->content;
	current = stack_a->next;
	while (current != NULL)
	{
		if (current->content > maior)
			maior = current->content;
		current = current->next;
	}
	return (maior);
}
