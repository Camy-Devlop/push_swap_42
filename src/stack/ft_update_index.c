/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 21:43:29 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 11:45:41 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_update_index(t_stack s)
{
	size_t		i;
	t_element	e;

	if (!s)
		return ;
	e = s->begin;
	if (!e)
		return (s->length = 0, (void)0);
	i = 0;
	while (e)
	{
		e->i = i;
		e = e->next;
		i++;
	}
	s->length = i;
	i = 0;
}
