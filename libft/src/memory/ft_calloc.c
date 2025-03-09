/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:43:22 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/03 15:16:08 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*void	ft_init(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}*/

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*m;

	m = NULL;
	if (((long long int)elementCount * (long long int)elementSize) < 0)
		return (NULL);
	if (INT_MAX <= (long long int)elementCount
		|| (INT_MAX <= (long long int)elementSize)
		|| ((long long int)elementCount < 0 && (long long int)elementSize < 0))
		return (NULL);
	m = malloc(elementCount * elementSize);
	if (!m)
		return (NULL);
	if (elementCount == 0 || elementSize == 0)
		return (m);
	ft_bzero(m, elementCount * elementSize);
	return (m);
}
/*
#include <stdio.h>
int main()
{

	void *m = ft_calloc(0,-5);
	if (!m)
		printf("le retour de malloc est NULL \n");
	if (m)
		printf("le retour de malloc est cree  \n");
	free(m);
	m=NULL;
}*/
