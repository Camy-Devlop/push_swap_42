/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:48:19 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:48:21 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src || !dest)
		return (dest);
	if (n <= 0)
		return (dest);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	char array [] = "bonjours comment tu vas";
    	char d1[8];
    	char d2[8];
	size_t size = 13;

	ft_memcpy(d1,array,size);
	memcpy(d2,array,size);
    	
        printf( "copy %s \n", d1 );
        printf( "offi %s \n", d2 );
    	
	printf( "\n" );

    return 0;
}*/
