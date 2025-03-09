/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:35:42 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/02 14:56:54 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_bool	check_lower_middle(t_stack s)
{
	t_element	e;

	e = s->begin;
	while (e)
	{
		if (e->norm < s->medium)
			return (e = NULL, True);
		e = e->next;
	}
	return (False);
}

t_bool	check_upper_middle(t_stack s)
{
	t_element	e;

	e = s->begin;
	while (e)
	{
		if (e->norm > s->medium)
			return (e = NULL, True);
		e = e->next;
	}
	return (False);
}
