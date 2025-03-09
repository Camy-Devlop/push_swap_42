/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:48:36 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:48:38 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memmove( void *dest, const void *src, size_t size)
{
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dest;
	if (s < d && d < s + size)
	{
		d += size;
		s += size;
		while (size--)
			*--d = *--s;
	}
	else
	{
		while (size--)
			*d++ = *s++;
	}
	return (dest);
}
/*//if( d < s && s < d + size )
/{
//	while (size--)
//		*d++ = *s++;
//}*/
