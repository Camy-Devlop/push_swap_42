/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_str_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:56:55 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/18 16:45:29 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_table	*ft_split_str_int(char **str)
{
	t_table	*t;
	size_t	i;

	if (!*str)
		return (NULL);
	t = malloc(sizeof(t_table));
	if (!t)
		return (NULL);
	t->tab_str = ft_split(*str, ' ');
	if (!t->tab_str)
		return (NULL);
	i = 0;
	while (t->tab_str[i])
		i++;
	t->tab_int = malloc(i * sizeof(int));
	t->n = i;
	i = 0;
	while (i < t->n)
	{
		t->tab_int[i] = ft_push_swap_atoi(t->tab_str[i], t, *str);
		i++;
	}
	free(*str);
	return (*str = NULL, t);
}
