/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:52:25 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 12:12:13 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_medium(t_stack s)
{
	float		medium;
	t_element	e;

	if (!s || !s->begin)
		return ;
	if (s->length == 0)
		return ;
	if (s->length == 1)
		return ;
	medium = 0;
	e = s->begin;
	while (e)
	{
		medium += e->norm;
		e = e->next;
	}
	s->medium = (medium / ((float)s->length));
}
