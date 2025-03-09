/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:44:57 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:44:59 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c < 127);
}
/*
int main()
{
	//char *d ="bonjour £ éé1123";
	int i = 0;
	while (i <= 127)
	{
		printf("%c = %d officiel %d\n",i,i,isprint(i));
		printf("  copy     %d\n",ft_isprint(i));
		i++;
	}
	return 0;
}*/
