/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:50:11 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:50:15 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	if (c == 0)
		return ((char *)s + (size_t)ft_strlen(s));
	while (*s != '\0' )
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s != (char)c)
		return (NULL);
	if (*s == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main()
{
	char d[]= "teste";
	printf("\"%s\"\n",ft_strchr(d, 1024));
	printf("\"%s\"\n",strchr(d, 1024));
}
*/
