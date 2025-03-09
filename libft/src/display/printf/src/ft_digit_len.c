/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:45:31 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"

int	ft_digit_len(unsigned long long hexa, int base)
{
	int	len;

	len = 0;
	if (base == 0)
		return (-1);
	while (hexa)
	{
		hexa /= base;
		len++;
	}
	return (len);
}
