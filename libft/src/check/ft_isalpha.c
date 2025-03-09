/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:44:21 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:44:24 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

static int	ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

/*
{
	char *d="bonjour 16778-(-è_";
	while (*d != '\0')
	{
		printf("%c valeur %d \n",(char)*d,ft_isalpha(*d));
		d++;
	}
	printf("fin\n");
}*/
