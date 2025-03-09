/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:51:32 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:51:34 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t s_dest;
	size_t s_src;

	i = 0;
	s_dest = ft_strlen(dst);
  s_src  = ft_strlen(src);
  if (size - 1 <= s_dest)
    return (s_src + size);
  while (s_dest + i < size - 1)
  {
    dst[s_dest + i] = src[i];
    i++;
  }
	dst[s_dest + i] = '\0';
  return (s_dest + s_src);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (!dst || size == 0)
		return (len_src);
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] && len_dst + i < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>
int main()
{
  char dest[6]="salut";
  char src[5]="Camy";
	size_t d=ft_strlcat(dest,src,10);
	printf("%ld => %s\n",d,dest);
	return (0);
}*/
