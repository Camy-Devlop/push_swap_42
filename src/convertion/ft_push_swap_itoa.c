/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_itoa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 10:06:12 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/18 16:54:54 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	ft_convert(const char *str, int signe, t_table *t, char *strs)
{
	long	v;

	v = 0;
	while (ft_isdigit(*str) && *str != '\0')
	{
		v *= 10;
		v += *str - '0';
		if ((v > 2147483647 && signe == 1) || (v > 2147483648 && signe == -1))
		{
			ft_free_table(t);
			ft_error(0);
			free(strs);
			exit (1);
		}
		str++;
	}
	return (signe * v);
}

int	ft_push_swap_atoi(const char *str, t_table *t, char *strs)
{
	int	signe;

	signe = 1;
	if (!str)
		return (0);
	while ((*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\f') && *str != '\0')
		str++;
	if (*str == '-' && ft_isdigit(*(str + 1)))
	{
		signe = -1;
		str++;
	}
	if (*str == '+' && ft_isdigit(*(str + 1)))
		str++;
	return (ft_convert(str, signe, t, strs));
}
