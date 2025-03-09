/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_element.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 00:08:23 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 13:03:13 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_element	ft_create_element(int v, t_stack base, t_element prev)
{
	struct s_element	*e;

	if (ft_stack_empty(base))
		return (NULL);
	e = calloc(1, sizeof(struct s_element));
	if (!e)
		return (NULL);
	e->i = base->length;
	e->v = v;
	e->prev = prev;
	base->length++;
	base->end = e;
	return (e);
}

void	add_element(t_table *t, t_stack s)
{
	t_element	e;
	size_t		i;

	i = 0;
	if (!s || !t || t->n == 0)
		return ;
	if (!s->begin)
		s->begin = ft_create_element(t->tab_int[i], s, NULL);
	if (!s->begin)
		return (ft_free_table(t), (void)0);
	e = s->begin;
	i++;
	while (i < t->n)
	{
		e->next = ft_create_element(t->tab_int[i], s, e);
		e = e->next;
		i++;
	}
	e = NULL;
}
