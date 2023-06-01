/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:45:01 by jalves-p          #+#    #+#             */
/*   Updated: 2023/05/31 10:45:01 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"
void push_swap(char **av)
{

}
int main(int ac, char **av)
{
	int *arr;
	int i;

	i = 0;
	if (ac < 2)
		return (printf("%s", "Erro"));
	while (i < ac - 1)
	{
		arr[i] = ft_atoi(av[i + 1]);
		i++;
	}

	i = 0;
	while (i < ac -1)
		printf("%d /n", arr[i++]);
}void push_swap(char **av)
{

}
int main(int ac, char **av)
{
	int *arr;
	int i;

	i = 0;
	if (ac < 2)
		return (printf("%s", "Erro"));
	while (i < ac - 1)
	{
		arr[i] = ft_atoi(av[i + 1]);
		i++;
	}

	i = 0;
	while (i < ac -1)
		printf("%d /n", arr[i++]);
}