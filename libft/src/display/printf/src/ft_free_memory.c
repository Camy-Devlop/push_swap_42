/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 12:03:13 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"
/*
*	name : ft_free_memory
*	param n	=> unsigned int : est le nombre de parametre a liberer 
*	param ... type :variadique a liberer.	
*	return 	:
*/
void	ft_free_memory(unsigned int n, ...)
{
	unsigned int	i;
	void			*addrs;
	va_list			mem;

	i = 0;
	if (n == 0)
		return ;
	va_start(mem, n);
	while (i < n)
	{
		addrs = va_arg(mem, void *);
		free(addrs);
		i++;
	}
	va_end(mem);
}
