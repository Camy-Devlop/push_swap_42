/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:50:55 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:50:57 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
  void ft_up(unsigned int i,char *ss)
  {
	  
    ss[i] = ss[i] - 32;
  }
  char s[]="bonjour";
  ft_striteri(s,&ft_up);
  printf("modif => %s\n",s);
  return 0;
}*/
