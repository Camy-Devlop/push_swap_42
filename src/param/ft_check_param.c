/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:57:30 by isadbaib          #+#    #+#             */
/*   Updated: 2025/01/13 20:45:55 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_bool	ft_check_double(int *tab, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!tab || size == 0)
		return (False);
	if (size == 1)
		return (True);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i != j && tab[i] == tab[j])
				return (False);
			j++;
		}
		i++;
	}
	return (True);
}

static int	ft_check_string(char *str, size_t i)
{
	if (!str && i == 0)
		return (1);
	if (*str == '\0' && i > 0)
		return (0);
	if (i == 0)
		return (ft_check_string(str + 1, i + 1) || (*str != ' '
				&& (*str != '-' || isdigit(*(str + 1)) == 0)
				&& isdigit(*str) == 0));
	else
		return (ft_check_string(str + 1, i + 1)
			|| (*str != ' ' && (*(str - 1) != ' '
					|| *str != '-' || isdigit(*(str + 1)) == 0)
				&& isdigit(*str) == 0));
}

t_bool	ft_check(void *obj, size_t n, size_t chk)
{
	size_t	i;

	i = 0;
	if (chk == 1)
	{
		while (i < n)
		{
			if (ft_check_string(((char **)obj)[i], 0) == 1)
				return (ft_error(0));
			i++;
		}
	}
	else if (chk == 2)
	{
		if (!obj)
			return (ft_error(0));
	}
	else if (chk == 3)
	{
		if (ft_check_double(((t_table *)obj)->tab_int,
				((t_table *)obj)->n) == False)
			return (ft_free_table((t_table *)obj), ft_error(0));
	}
	return (True);
}
