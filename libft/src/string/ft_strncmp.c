/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:52:25 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:52:27 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && (s1[i] == s2[i]) && (i < n))
		i++;
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
int main()
{
	printf("1 test officiel %d\n", strncmp("t","",0));
	printf("test cpy       %d\n", ft_strncmp("t","",0));
	//------------------------------------------------------
	printf("2 test officiel %d\n", strncmp("1234","12345",3));
	printf("test cpy        %d\n", ft_strncmp("1234","12345",3));
	//------------------------------------------------------
	printf("3 test officiel %d\n", strncmp("1234","12345",4));
	printf("test cpy        %d\n", ft_strncmp("1234","12345",4));
	//------------------------------------------------------
	printf("4 test officiel %d\n", strncmp("1234","12345",-1));
	printf("test cpy        %d\n", ft_strncmp("1234","12345",-1));
	//------------------------------------------------------
	printf("5 test officiel %d\n", strncmp("","",42));
	printf("test cpy        %d\n", ft_strncmp("","",42));
	//------------------------------------------------------
	printf("6 test officiel %d\n", strncmp("Tripouille","Tripouille",42));
	printf("test cpy        %d\n", ft_strncmp("Tripouille","Tripouille",42));
	//------------------------------------------------------
	printf("7 test officiel %d\n", strncmp("Tripouille","tripouille",42));
	printf("test cpy        %d\n", ft_strncmp("Tripouille","tripouille",42));
	//------------------------------------------------------
}*/
