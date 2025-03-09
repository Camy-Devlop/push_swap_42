/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:49:08 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:49:10 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	size_t	i;

	(void)i;
	i = write(fd, &c, 1);
}
/*
#include <stdio.h>
int main()
{
	char c = 0;
ft_putchar_fd(c,1);
  return (0);
}
//gcc ft_putchar_fd.c -o a
*/