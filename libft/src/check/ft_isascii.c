/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:44:33 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:44:36 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
/*
int main()
{
	//char *d ="bonjour £ éé1123";
	int i = -6;
	while (i <= 138)
	{
		printf("%c = %d officiel %d\n",i,i,isascii(i));
		printf("         copy     %d\n",ft_isascii(i));
		i++;
	}
	return 0;
}*/
