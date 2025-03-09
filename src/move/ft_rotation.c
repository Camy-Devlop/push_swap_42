/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:55:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 12:05:42 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_bool	ft_rotation(t_stack a)
{
	t_element	e;

	if (!a || a->length < 2)
		return (False);
	if (a->length == 2)
		return (ft_swap(a));
	e = a->begin;
	a->begin = a->begin->next;
	a->begin->prev = NULL;
	a->end->next = e;
	e->prev = a->end;
	a->end = e;
	e->next = NULL;
	e = NULL;
	ft_update_index(a);
	return (True);
}

t_bool	ft_rr(t_stack a, t_stack b)
{
	if (ft_rotation(a) == True || ft_rotation(b) == True)
		return (True);
	return (False);
}

void	ft_rotation_instruct(t_stack a, t_instruct **i, char c)
{
	if (c == 'a' || c == 'b')
	{
		if (c == 'a')
		{
			if (ft_rotation(a) == True)
				ft_add_instruction(i, "ra");
		}
		else
			if (ft_rotation(a) == True)
				ft_add_instruction(i, "rb");
	}
}

void	ft_rr_instruct(t_stack a, t_stack b, t_instruct **i)
{
	if (ft_rotation(a) == True || ft_rotation(b) == True)
		ft_add_instruction(i, "rr");
}
