/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:01:39 by aalseri           #+#    #+#             */
/*   Updated: 2022/06/26 14:39:49 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*end;

	if (lst)
	{
		while (lst)
		{
			if (!lst->next)
				end = lst;
			lst = lst->next;
		}
		return (end);
	}
	return (NULL);
}
