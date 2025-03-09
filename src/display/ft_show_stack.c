/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:12:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 13:29:18 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	show(t_element	*e, size_t i[3], size_t nb, t_stack *s)
{
	size_t		j;

	i[0] = 0;
	while (i[0] < i[2])
	{
		j = 0;
		while (j < nb)
		{
			if (i[0] < s[j]->length)
			{
				ft_printf("%d   ", e[j]->v);
				e[j] = e[j]->next;
			}
			else
				ft_printf(" ");
			j++;
		}
		i[0]++;
		ft_printf("\n");
	}
}

void	ft_show_stack(size_t nb, t_stack *s)
{
	size_t		i[3];
	t_element	*e;

	if (!s || nb <= 0)
		return ;
	e = ft_calloc(nb, sizeof(t_element));
	if (!e)
		return ;
	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	while (i[0] < nb)
	{
		e[i[0]] = s[i[0]]->begin;
		if (i[2] < s[i[0]]->length)
			i[2] = s[i[0]]->length;
		i[0]++;
	}
	show(e, i, nb, s);
	free(e);
}
