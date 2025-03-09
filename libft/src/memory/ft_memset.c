/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:48:50 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:48:52 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memset(void *memo, int v, size_t size)
{
	size_t	i;

	i = 0;
	if (!memo || (long long int)size <= 0)
		return (memo);
	while (i < size)
		((char *)memo)[i++] = v;
	return (memo);
}
/*
int main()
{
	int array [] = { 54, 85, 20, 63, 21 };
    	size_t size = sizeof( int ) * 5;
    	int length;

    	// Display the initial values 
    	for( length=0; length<5; length++) {
        	printf( "%d ", array[ length ] );
    	}
    	printf( "\n" );

    // Reset the memory bloc 
    ft_memset( array, 123452345225, size );

    // Display the new values 
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
	memset( array, 123452345225, size );

   // 	 Display the new values 
    	for( length=0; length<5; length++) {
        	printf( "%d ", array[ length ] );
    	}
    	printf( "\n" );
    
    return 0;
}*/
