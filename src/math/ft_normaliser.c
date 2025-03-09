/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normaliser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:11:19 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 11:16:44 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_norm(t_stack s)
{
	float		min;
	float		max;
	float		n;
	float		m;
	t_element	e;

	if (s->length == 0 || !s)
		return ;
	min = (float)ft_search_min(s);
	max = (float)ft_search_max(s);
	m = max - min;
	if (m == 0)
		return ;
	e = s->begin;
	while (e)
	{
		n = ((float)e->v) - min;
		e->norm = n / m;
		e = e->next;
	}
}
