/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:48:00 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:48:02 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	if (!s || 0 == n)
		return (NULL);
	while (i < n)
	{
		if (*ss == (char)c)
			return ((void *)ss);
		i++;
		ss++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char s []={0,1,2,3,4,5};
	
	printf("%s\n",(char*)memchr(s, 0, 0) ==NULL?"null":"autre");
	printf("%p %p\n",(char*)memchr(s, 0, 1) ,s);
	printf("%p %p\n",(char*)memchr(s, 2, 3), s+2);
	printf("%p %p\n",(char*)memchr(s, 6, 6), NULL);
	printf("%p %p\n",(char*)memchr(s, 2+256, 3) , s+2);
}*/
