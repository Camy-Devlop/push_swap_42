/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 23:29:11 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 12:02:44 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_free_table(t_table *t)
{
	size_t	i;

	i = 0;
	if (!t)
		return ;
	if (t->tab_str)
		while (i <= t->n)
			free (t->tab_str[i++]);
	free(t->tab_str);
	if (t->tab_int)
		free(t->tab_int);
	free(t);
	t = NULL;
}

void	ft_free_element(t_element e)
{
	t_element	prev;
	t_element	next;

	if (!e)
		return ;
	prev = e->prev;
	next = e->next;
	free(e);
	next->prev = prev;
	if (prev->next != NULL)
		prev->next = next;
	prev = NULL;
	next = NULL;
	e = NULL;
}

void	ft_free_element_all(t_element e)
{
	if (!e)
		return ;
	ft_free_element_all(e->next);
	e->next = NULL;
	free(e);
	e = NULL;
}

void	ft_free_stack(t_stack n)
{
	if (ft_stack_empty(n))
		return ;
	ft_free_element_all(n->begin);
	n->begin = NULL;
	free(n);
	n = NULL;
}

void	ft_free_instruction(t_instruct *e)
{
	if (!e)
		return ;
	ft_free_instruction(e->next);
	e->next = NULL;
	free(e->str);
	free(e->nb);
	e->str = NULL;
	free(e);
	e = NULL;
}
