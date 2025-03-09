/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:46:50 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"

int	ft_print_u(va_list *arg)
{
	unsigned int	val;
	int				len;
	char			*str;

	if (!arg)
		return (-1);
	val = (unsigned int)((uintptr_t)va_arg(*arg, uintptr_t));
	if (val == 0)
		return (write(1, "0", 1));
	len = ft_digit_len(val, 10);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (-1);
	str[len] = '\0';
	while (0 < len)
	{
		str[--len] = '0' + (val % 10);
		val /= 10;
	}
	len = write(1, str, ft_strlen(str));
	ft_free_memory(1, str);
	return (len);
}
