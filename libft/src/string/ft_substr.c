/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:53:18 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:53:20 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
/*
 int main()
 {
   char *s="salut";
   char *ss = ft_substr(s,42000000,0);
   char *ss2 = ft_substr2(s,42000000,0);
   printf("sub Str => \"%s\"\n",ss);
   printf("sub Str => \"%s\"\n",ss2);
   free(ss);
   free(ss2);
   return 0;
 }*/
