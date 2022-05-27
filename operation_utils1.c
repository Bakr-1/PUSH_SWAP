/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:11:47 by aalseri           #+#    #+#             */
/*   Updated: 2022/05/22 16:19:26 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	num_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_swap	*sa(t_swap *array)
{	
	num_swap(&array->stacka[array->sizea - 1], \
	&array->stacka[array->sizea - 2]);
	ft_putendl_fd(SA, STDOUT_FILENO);
	return (array);
}

t_swap	*sb(t_swap *array)
{
	num_swap(&array->stackb[array->sizea - 1], \
	&array->stackb[array->sizea - 2]);
	ft_putendl_fd(SB, STDOUT_FILENO);
	return (array);
}

t_swap	*pa(t_swap *array)
{
	if (!array->sizeb)
		return (array);
	array->stacka[array->sizea++] = array->stackb[--array->sizeb];
	ft_putendl_fd(PA, STDOUT_FILENO);
	return (array);
}

t_swap	*pb(t_swap *array)
{
	if (!array->sizea)
		return (array);
	array->stackb[array->sizeb++] = array->stacka[--array->sizea];
	ft_putendl_fd(PB, STDOUT_FILENO);
	return (array);
}
