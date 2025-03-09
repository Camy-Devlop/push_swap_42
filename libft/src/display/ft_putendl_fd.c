/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:49:19 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:49:20 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	(void)i;
	i = write(fd, s, ft_strlen(s));
	i = write(fd, "\n", 1);
}
/*
#include <stdio.h>
int main(int nb, char **tab_str)
{
  (void)nb;
  ft_putendl_fd("caca",2);
  printf("argumment %s\n",tab_str[1]);
  return 0;
}*/
