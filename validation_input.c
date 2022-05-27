/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:13:13 by aalseri           #+#    #+#             */
/*   Updated: 2022/05/23 16:02:23 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap	*ft_adding_numbers(t_swap *array)
{
	int	val;
	int	k;

	k = 0;
	array->split = ft_split(array->numstr, ' ');
	if (!array->split)
		ft_error("allocate memory failed", array);
	free(array->numstr);
	array->numstr = NULL;
	while (array->split[k])
	{
		array->err_flag += ft_atoiof(array->split[k], &val);
		array->err_flag += check_array(array->array, val, k - 1);
		array->array[k++] = val;
	}
	ft_undo_alloc(array->split);
	free(array->split);
	array->split = 0;
	return (array);
}

t_swap	ft_validtion(char **argv, int argc)
{
	t_swap	arg;
	int		i;

	i = 0;
	ft_init1(&arg);
	while (i < argc)
	{
		arg.numstr = ft_strjoin(arg.numstr, " ");
		arg.numstr = ft_strjoin(arg.numstr, argv[i++]);
	}
	arg.n_arg = number_arg(arg.numstr, ' ');
	arg.array = (int *)malloc(sizeof(int) * (arg.n_arg));
	if (!arg.array)
		ft_error("allocate memory failed", &arg);
	arg.err_flag = numbercheck(&arg.numstr);
	if (arg.err_flag)
		ft_error("ERROR: wrong input", &arg);
	ft_adding_numbers(&arg);
	if (arg.err_flag)
		ft_error("ERROR: Duplicate numbers or large number", &arg);
	return (arg);
}
