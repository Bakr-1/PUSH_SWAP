/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:41:30 by aalseri           #+#    #+#             */
/*   Updated: 2022/05/27 18:23:27 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

# define SA "sa"
# define SB "sb"
# define PA "pa"
# define PB "pb"
# define RA "ra"
# define RB "rb"
# define RRA "rra"
# define RRB "rrb"

typedef struct s_swap
{
	char	*numstr;
	char	**split;
	int		*array;
	int		n_arg;
	int		err_flag;
	int		*stacka;
	int		sizea;
	int		*stackb;
	int		sizeb;
	int		*sortedarray;
	int		sizes;
}			t_swap;

//First phase (parsing)
int		numbercheck(char **numstr);
int		number_arg(char const *str, char set);
int		check_array(int *array, int value, int argc);
void	ft_error(char *str, t_swap *array);
t_swap	*free_struct(t_swap *array);
t_swap	*free_struct1(t_swap *array);
t_swap	ft_validtion(char **argv, int argc);
t_swap	*ft_init1(t_swap *array);

//Second phase (sorting)
void	num_swap(int *a, int *b);
t_swap	*sa(t_swap *array);
t_swap	*sb(t_swap *array);
t_swap	*pa(t_swap *array);
t_swap	*pb(t_swap *array);
t_swap	*ra(t_swap *array);
t_swap	*rb(t_swap *array);
t_swap	*rra(t_swap *array);
t_swap	*rrb(t_swap *array);

//small
int		is_sorted(t_swap array);
t_swap	*allocate_stackab(t_swap *array);
void	reverse_array(int *array, size_t size);
t_swap	*_sorting(t_swap *array);
t_swap	*run(char *op, t_swap *array);
t_swap	run_n(char *op, t_swap a, int n);
void	ft_quit(t_swap *a);

//big
t_swap	*sort_big(t_swap *a);
t_swap	*allocate_big(t_swap *array);
void	quicksort(int *array, int low, int high);
t_swap	*sort_3(t_swap *a);
t_swap	*rot_min(t_swap *a);
t_swap	*rot_max(t_swap *a);
int		find_min(t_swap *a);
int		find_max(t_swap *a);

#endif
