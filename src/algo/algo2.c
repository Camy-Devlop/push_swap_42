/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:02:24 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/18 16:53:29 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	algo2s1(t_stack *s, t_instruct **i)
{
	if (s[1]->begin->v < s[1]->begin->next->v)
		ft_swap_instruct(s[1], i, 'b');
	ft_push_instruction(s[0], s[1], i, 'a');
	ft_push_instruction(s[0], s[1], i, 'a');
}

void	algo2s0(t_stack *s, t_instruct **i)
{
	if (s[0]->begin->v > s[0]->begin->next->v)
		ft_swap_instruct(s[0], i, 'a');
}

void	biggest(t_stack s, int *t)
{
	t_element	e;

	t[2] = s->begin->v;
	t[0] = 0;
	t[1] = 0;
	e = s->begin;
	while (e)
	{
		if (t[2] < e->v)
		{
			t[0] = t[1];
			t[2] = e->v;
		}
		t[1]++;
		e = e->next;
	}
}

void	algo3(t_stack *s, t_instruct **i)
{
	while (ft_check_croissant(s[0]) != True)
	{
		if (s[0]->begin->v > s[0]->begin->next->v
			&& s[0]->begin->v > s[0]->begin->next->next->v)
			ft_rotation_instruct(s[0], i, 'a');
		if (s[0]->begin->v < s[0]->begin->next->v
			&& s[0]->begin->next->v > s[0]->begin->next->next->v)
			ft_invert_rotation_instruct(s[0], i, 'a');
		if (s[0]->begin->v > s[0]->begin->next->v
			&& s[0]->begin->next->v > s[0]->begin->next->next->v)
		{
			ft_invert_rotation_instruct(s[0], i, 'a');
			ft_swap_instruct(s[0], i, 'a');
		}
		if (s[0]->begin->v > s[0]->begin->next->v)
			ft_swap_instruct(s[0], i, 'a');
	}
}
