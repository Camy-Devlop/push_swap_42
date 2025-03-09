/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decreasing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:46:24 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 12:16:01 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_bool	ft_check_decreasing(t_stack s)
{
	t_element	e;

	if (s->length == 1)
		return (True);
	if (s->length == 2)
	{
		if (s->begin->v > s->begin->next->v)
			return (True);
		else
			return (False);
	}
	e = s->begin;
	while (e && e->next)
	{
		if (e->v < e->next->v)
			return (False);
		e = e->next;
	}
	e = NULL;
	return (True);
}

t_bool	ft_check_croissant(t_stack s)
{
	t_element	e;

	if (s->length == 1)
		return (True);
	if (s->length == 2)
		return (s->begin->v < s->begin->next->v);
	e = s->begin;
	while (e && e->next)
	{
		if (e->v > e->next->v)
			return (False);
		e = e->next;
	}
	e = NULL;
	return (True);
}
