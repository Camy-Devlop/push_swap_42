/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invert_rotation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:20:10 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 12:00:28 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_bool	ft_invert_rotation(t_stack a)
{
	t_element	e;

	if (!a || a->length <= 1)
		return (False);
	if (a->length == 2)
		return (ft_swap(a));
	e = a->end;
	a->end = e->prev;
	e->prev = NULL;
	e->next = NULL;
	e->next = a->begin;
	a->begin->prev = e;
	a->begin = e;
	e = NULL;
	if (a->end)
		a->end->next = NULL;
	ft_update_index(a);
	return (True);
}

t_bool	ft_rr_invert_rotation(t_stack a, t_stack b)
{
	if (ft_invert_rotation(a) == True || ft_invert_rotation(b) == True)
		return (True);
	return (False);
}

void	ft_invert_rotation_instruct(t_stack a, t_instruct **i, char c)
{
	if (c == 'a' || c == 'b')
	{
		if (ft_invert_rotation(a) == True)
		{
			if (c == 'a')
				ft_add_instruction(i, "rra");
			else
				ft_add_instruction(i, "rrb");
		}
	}
}

void	ft_rr_invert_rota_instruct(t_stack a, t_stack b, t_instruct **i)
{
	if (ft_invert_rotation(a) == True || ft_invert_rotation(b) == True)
		ft_add_instruction(i, "rrr");
}
