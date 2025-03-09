/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:39:06 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"

int	ft_check_type(const char *str, va_list *arg)
{
	int	error;

	error = 0;
	if (*str == 'd' || *str == 'i')
		error += ft_print_desimal(arg);
	else if (*str == 'c')
		error += ft_print_char(arg);
	else if (*str == '%')
		error += write(1, "%", 1);
	else if (*str == 's')
		error += ft_print_string(arg);
	else if (*str == 'u')
		error += ft_print_u(arg);
	else if (*str == 'x')
		error += ft_print_x(arg);
	else if (*str == 'X')
		error += ft_print_x_upcase(arg);
	else if (*str == 'p')
		error += ft_print_adress(arg);
	str += 1;
	return (error);
}
