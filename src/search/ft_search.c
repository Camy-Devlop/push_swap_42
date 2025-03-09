/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:29:59 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 12:10:49 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/push_swap.h"

int	ft_search_max(t_stack s)
{
	t_element	e;
	int			i;

	e = s->begin;
	i = e->v;
	while (e->next)
	{
		if (e->next->v > i)
			i = e->next->v;
		e = e->next;
	}
	e = NULL;
	return (i);
}

int	ft_search_min(t_stack s)
{
	t_element	e;
	int			i;

	e = s->begin;
	i = e->v;
	while (e->next)
	{
		if (e->next->v < i)
			i = e->next->v;
		e = e->next;
	}
	e = NULL;
	return (i);
}
