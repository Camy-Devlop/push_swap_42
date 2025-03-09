/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_upcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:48:02 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"

int	ft_print_x_upcase(va_list *arg)
{
	char			*str;
	unsigned int	val;
	int				len;

	if (!arg)
		return (-1);
	val = (unsigned int)va_arg(*arg, uintptr_t);
	if (val == 0)
		return (write(1, "0", 1));
	len = ft_digit_len(val, 16);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (-1);
	str[len] = '\0';
	while (0 < len)
	{
		if (9 < (val % 16))
			str[--len] = ((TABHEX)[(val % 16)]) - 32 ;
		else
			str[--len] = ((TABHEX)[(val % 16)]);
		val /= 16;
	}
	len = write(1, str, ft_strlen(str));
	ft_free_memory(1, str);
	return (len);
}
