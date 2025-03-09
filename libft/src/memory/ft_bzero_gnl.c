/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_gnl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:04:00 by isadbaib          #+#    #+#             */
/*   Updated: 2024/12/02 12:04:09 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_bzero_gnl(void *obj, size_t size)
{
	size_t	i;
	char	*o;

	o = obj;
	i = 0;
	if (!o || (long long)size <= 0)
		return (NULL);
	while (i < size)
	{
		o[i] = 0;
		i++;
	}
	return (obj);
}
