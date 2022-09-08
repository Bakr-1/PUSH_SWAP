/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:54:07 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/08 17:57:49 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(char *str, t_swap *array)
{
	ft_putendl_fd(str, STDERR_FILENO);
	free_struct(array);
	free_struct1(array);
	exit(TRUE);
}

t_swap	*ft_init1(t_swap *array)
{
	array->numstr = NULL;
	array->split = NULL;
	array->array = NULL;
	array->n_arg = 0;
	array->err_flag = 0;
	array->stacka = NULL;
	array->sizea = 0;
	array->stackb = NULL;
	array->sizeb = 0;
	array->sortedarray = NULL;
	array->sizes = 0;
	return (array);
}

t_swap	*free_struct(t_swap *array)
{
	if (array->numstr)
	{
		free(array->numstr);
		array->numstr = NULL;
	}
	if (array->split)
	{
		free(array->split);
		array->split = NULL;
	}
	if (array->array)
	{
		free(array->array);
		array->array = NULL;
	}
	return (array);
}

t_swap	*free_struct1(t_swap *array)
{
	if (array->stacka)
	{
		free(array->stacka);
		array->stacka = NULL;
	}
	if (array->stackb)
	{
		free(array->stackb);
		array->stackb = NULL;
	}
	if (array->sortedarray)
	{
		free(array->sortedarray);
		array->sortedarray = NULL;
	}
	return (array);
}
