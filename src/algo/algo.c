/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:27:01 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/18 16:52:41 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	last_steps1(t_stack *s, t_instruct **i, int t[3])
{
	if (t[0] <= (int)s[1]->length / 2)
		while (t[2] != s[1]->begin->v)
			ft_rotation_instruct(s[1], i, 'b');
	else
		while (t[2] != s[1]->begin->v)
			ft_invert_rotation_instruct(s[1], i, 'b');
	if (0 < s[0]->length)
	{
		if (t[2] == s[1]->begin->v && s[0]->begin->v > s[1]->begin->v)
			ft_push_instruction(s[0], s[1], i, 'a');
	}
	else
		ft_push_instruction(s[0], s[1], i, 'a');
	if (0 < s[1]->length)
		if (s[0]->begin->v < s[1]->begin->v)
			ft_swap_instruct(s[1], i, 'b');
}

/*t[3] = index, j, v*/
static void	last_steps(t_stack *s, t_instruct **i)
{
	int			t[3];

	while (2 < s[1]->length)
	{
		biggest(s[1], t);
		if (t[0] == 0)
			ft_push_instruction(s[0], s[1], i, 'a');
		else if (t[0] == 1)
		{
			ft_swap_instruct(s[1], i, 'b');
			ft_push_instruction(s[0], s[1], i, 'a');
		}
		else if (1 < t[0])
		{
			last_steps1(s, i, t);
		}
	}
	return (algo2s1(s, i), (void)0);
}

void	algo_n(t_stack *s, t_instruct **i)
{
	while (1 < s[0]->length)
	{
		if (s[0]->begin->norm > s[0]->medium)
		{
			ft_rotation_instruct(s[0], i, 'a');
			ft_norm(s[0]);
			ft_medium(s[0]);
		}
		else
		{
			ft_push_instruction(s[0], s[1], i, 'b');
			ft_norm(s[1]);
			ft_medium(s[1]);
			if (s[1]->begin->norm < s[1]->medium)
				ft_rotation_instruct(s[1], i, 'b');
		}
	}
}

void	algo(t_stack *s, t_instruct **i)
{
	if (ft_check_croissant(s[0]) == False)
	{
		if (s[0]->length == 2)
			algo2s0(s, i);
		else if (s[0]->length == 3)
			algo3(s, i);
		else if (3 < s[0]->length)
		{
			algo_n(s, i);
			last_steps(s, i);
		}
	}
}
