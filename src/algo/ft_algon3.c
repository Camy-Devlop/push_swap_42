/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algon3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:00:50 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 11:39:21 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	algo_n2(t_stack *s, t_instruct **i, char c)
{
	if (s[c - 'a']->begin->v < s[c - 'a']->begin->next->v)
		ft_swap_instruct(s[c - 'a'], i, 'b');
}

void	ft_algo_n3(t_stack *s, t_instruct **i, char c)
{
	if (c == 'a' || c == 'b')
	{
		if ((c - 'a') == 0)
		{
			if (ft_check_croissant(s[c - 'a']) == True)
				return ;
			if (s[c - 'a']->length > 2)
				if (s[c - 'a']->begin->v > s[c - 'a']->begin->next->v)
					ft_swap_instruct(s[c - 'a'], i, 'a');
			if (s[c - 'a']->length > 2)
				if (s[c - 'a']->end->v < s[c - 'a']->begin->v)
					ft_invert_rotation_instruct(s[c - 'a'], i, 'a');
		}
		else
		{
			if (ft_check_decreasing(s[c - 'a']) == True)
				return ;
			if (s[c - 'a']->length > 2)
			{
				algo_n2(s, i, c);
				if (s[c - 'a']->end->v > s[c - 'a']->begin->v)
					ft_invert_rotation_instruct(s[c - 'a'], i, 'b');
			}
		}
	}
}

void	algo_b_n3(t_stack *s, t_instruct **i)
{
	if (2 < s[1]->length)
		return ;
	if (s[1]->length == 2)
	{
		if (s[1]->begin->v < s[1]->begin->next->v)
			ft_swap_instruct(s[1], i, 'b');
		return ;
	}
}
