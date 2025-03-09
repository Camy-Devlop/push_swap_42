/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:42:45 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:42:50 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_bzero(void *memo, size_t size)
{
	size_t	i;

	i = 0;
	if (!memo || (long long int)size <= 0)
		return ;
	while (i < size)
	{
		*((unsigned char *)memo) = 0;
		memo++;
		i++;
	}
}
/*
int main()
{
	int array [] = { 54, 85, 20, 63, 21 };
    	size_t size = sizeof( int ) * 5;
    	int length;
    	// Display the initial values 
    	for( length=0; length<5; length++) 
        	printf( "%d ", array[ length ] );
    	
	printf( "\n" );
    	
	ft_bzero(array, size);
    	for( length=0; length<5; length++) 
        	printf( "%d ", array[ length ] );
	printf( "\n" );

    return 0;
}*/
