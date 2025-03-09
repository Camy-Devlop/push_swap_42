/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:46:39 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"
//il faut ajouter quand la valeur arg est NULL
int	ft_print_string(va_list *arg)
{
	char	*str;
	int		str_len;

	str = va_arg(*arg, char *);
	if (!str)
		return (write(1, "(null)", ft_strlen("(null)")));
	str_len = ft_strlen(str);
	return (write(1, str, str_len));
}
