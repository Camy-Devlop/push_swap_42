/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:54:07 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:54:10 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}
