/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:33:46 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/11 16:06:43 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static t_bool	ft_push1(t_stack a, t_stack b)
{
	ft_update_index(b);
	ft_update_index(a);
	if (b->length == 1)
		return (b->end = b->begin, True);
	return (True);
}

t_bool	ft_push(t_stack a, t_stack b)
{
	t_element	e;

	if (!a || !b)
		return (False);
	if (a->length < 1)
		return (False);
	e = a->begin;
	if (a->length == 1)
	{
		a->begin = NULL;
		a->end = NULL;
	}
	else
	{
		a->begin = a->begin->next;
		a->begin->prev = NULL;
	}
	e->next = b->begin;
	if (0 < b->length)
		b->begin->prev = e;
	b->begin = e;
	return (e = NULL, ft_push1(a, b));
}

void	ft_push_instruction(t_stack a, t_stack b, t_instruct **i, char c)
{
	if (c == 'a' || c == 'b')
	{
		if (c == 'a')
		{
			if (ft_push(b, a) == True)
				ft_add_instruction(i, "pa");
		}
		else if (c == 'b')
		{
			if (ft_push(a, b) == True)
				ft_add_instruction(i, "pb");
		}
	}
}
