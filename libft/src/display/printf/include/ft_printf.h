/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:37:58 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

# define SIZETABFLAGS 9

# define FLAGS "cdfipsuxX"
# define TABHEX "0123456789abcdef"

void	ft_free_memory(unsigned int n, ...);
int		ft_digit_len(unsigned long long hexa, int base);
int		ft_printf(const char *str, ...);
int		ft_check_type(const char *str, va_list *arg);
int		ft_print_desimal(va_list *arg);
int		ft_print_char(va_list *arg);
int		ft_print_string(va_list *arg);
int		ft_print_u(va_list *arg);
int		ft_print_x(va_list *arg);
int		ft_print_x_upcase(va_list *arg);
int		ft_print_adress(va_list *arg);
#endif
