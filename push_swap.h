/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:40:06 by jalves-p          #+#    #+#             */
/*   Updated: 2023/06/29 15:12:37 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

typedef struct s_lst
{
	int				content;
	struct s_lst	*prev;
	struct s_lst	*next;
}					t_lst;

typedef struct s_move
{
	bool			found;
	bool			to_top;

	int				num;
	int				moves;
	int				index;

	int				a;
	int				b;

	t_lst			*node;
	struct s_move	*neighbour;
}					t_move;


/* --- Movement rules functions --- */
void				sb(t_lst *stack_b);
void				sa(t_lst *stack_a);
void				ss(t_lst *stack_a, t_lst *stack_b);

void				rb(t_lst **stack_b);
void				ra(t_lst **stack_a);
void				rra(t_lst **stack_a);
void				rrb(t_lst **stack_b);
void				rr(t_lst **stack_a, t_lst **stack_b);
void				rrr(t_lst **stack_a, t_lst **stack_b);

void				pb(t_lst **stack_a, t_lst **stack_b);
void				pa(t_lst **stack_a, t_lst **stack_b);


/* --- ERRORS --- */
int					ft_duplicate(char **s);
int					ft_is_all_number(char **s);
int					check_errors(char **av);



/* --- FUNCTIONS --- */
int					ft_atoi(char *str);
int					ft_lstsize(t_lst *lst);
t_lst				*ft_addback(long val);
void				ft_lstadd_back(t_lst **lst, t_lst *new);
t_lst				*ft_lstlast(t_lst *lst);



/* --- SORTS --- */
void				sort_two(t_lst **a);
void				sort_three(t_lst **a);
void				sort_five(t_lst **a, t_lst **b);
void				sort_rest(t_lst **a, t_lst **b);



/* --- SORTS UTILS--- */
int					encontrar_menor(t_lst *stack_a);
int					encontrar_maior(t_lst *stack_a);

t_lst				*create_stack(int ac, char **av);
int					stack_sorted(t_lst **stack);
void				define_sort(t_lst **stack_a, t_lst **stack_b, int ac);

void 				reorganize(t_lst **a, int size_list);
t_move			find_best_nei(t_lst *s, int num);
t_move			numb_moves(t_lst *a, t_lst *b);
void				move_to_top(t_lst **a, t_lst **b);
void				smallest_top(t_lst **a, int size_list, int index);
t_move			neighbour_high(t_lst *a, int num_b);
t_move			neighbour_lower(t_lst *a, int num_b);
int					find_idx(t_lst **stack, int val);
void				move_numbers_b_to_top(t_lst **b, t_move num, int size_a, int size_b);
void				move_numbers_a_to_top(t_lst **a, t_move n, int size_a);

int					main(int ac, char **av);

#endif