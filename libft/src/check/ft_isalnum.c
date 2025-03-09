/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:43:59 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:44:03 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main()
{
	//char *d ="bonjour £ éé1123";
	int i = 0;
	while (i <= 127)
	{
		printf("%c officiel %d\n",i,isalnum(i));
		printf("  copy     %d\n",ft_isalnum(i));
		i++;
	}
	return 0;
}*/
