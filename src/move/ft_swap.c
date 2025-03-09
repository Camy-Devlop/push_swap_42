/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:53:13 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 12:08:07 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
/*
s (swap ) : Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.
*/

t_bool	ft_swap(t_stack t)
{
	int	v;

	if (!t)
		return (False);
	if (t->length < 2)
		return (False);
	if (t->begin && t->begin->next)
	{
		v = t->begin->v;
		t->begin->v = t->begin->next->v;
		t->begin->next->v = v;
		return (True);
	}
	return (False);
}

t_bool	ft_sswap(t_stack a, t_stack b)
{
	if (ft_swap(a) == True || ft_swap(b) == True)
		return (True);
	return (False);
}

void	ft_swap_instruct(t_stack s, t_instruct **i, char c)
{
	if (c == 'a' || c == 'b')
	{
		if (c == 'a' && ft_swap(s) == True)
			ft_add_instruction(i, "sa");
		else if (c == 'b' && ft_swap(s) == True)
			ft_add_instruction(i, "sb");
	}
}

void	ft_sswap_instruct(t_stack a, t_stack b, t_instruct **i)
{
	if (ft_sswap(a, b) == True)
		ft_add_instruction(i, "ss");
}
