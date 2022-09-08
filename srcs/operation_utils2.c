/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:22:38 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/08 17:57:57 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_swap	*ra(t_swap *a)
{
	int	i;

	i = a->sizea - 1;
	while (i != 0)
	{
		num_swap(&a->stacka[i], &a->stacka[i - 1]);
		i--;
	}
	ft_putendl_fd(RA, STDOUT_FILENO);
	return (a);
}

t_swap	*rb(t_swap *a)
{
	int	i;

	i = a->sizeb - 1;
	while (i != 0)
	{
		num_swap(&a->stackb[i], &a->stackb[i - 1]);
		i--;
	}
	ft_putendl_fd(RB, STDOUT_FILENO);
	return (a);
}

t_swap	*rra(t_swap *a)
{
	int	i;

	i = 0;
	while (i < a->sizea - 1)
	{
		num_swap(&a->stacka[i], &a->stacka[i + 1]);
		i++;
	}
	ft_putendl_fd(RRA, STDOUT_FILENO);
	return (a);
}

t_swap	*rrb(t_swap *a)
{
	int	i;

	i = 0;
	while (i < a->sizeb - 1)
	{
		num_swap(&a->stackb[i], &a->stackb[i + 1]);
		i++;
	}
	ft_putendl_fd(RRB, STDOUT_FILENO);
	return (a);
}

void	reverse_array(int *array, size_t size)
{
	static size_t	i;

	if (i < size)
	{
		num_swap(&array[i], &array[size - 1]);
		i++;
		reverse_array(array, size - 1);
	}
	i = 0;
}
