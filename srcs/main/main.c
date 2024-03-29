/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:47:18 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/08 17:57:51 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_swap	arg;

	if (argc < 2)
		exit (FALSE);
	arg = ft_validtion(&argv[1], argc - 1);
	if (is_sorted(arg))
		ft_error("is sorted", &arg);
	_sorting(&arg);
}
