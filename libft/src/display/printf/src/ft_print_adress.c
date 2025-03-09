/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:45:55 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"

int	ft_print_adress(va_list *arg)
{
	uintptr_t	hexa;
	int			len;
	char		*str;

	if (!arg)
		return (-1);
	hexa = va_arg(*arg, uintptr_t);
	if (hexa == 0)
		return (write(1, "(nil)", ft_strlen("(nil)")));
	len = ft_digit_len(hexa, 16);
	str = malloc(sizeof(char) * (len + 3));
	if (!str)
		return (-1);
	str[0] = '0';
	str[1] = 'x';
	str[len + 2] = '\0';
	len += 2;
	while (2 < len)
	{
		str[--len] = (TABHEX)[(hexa % 16)];
		hexa /= 16;
	}
	len = write(1, str, ft_strlen(str));
	ft_free_memory(1, str);
	return (len);
}
