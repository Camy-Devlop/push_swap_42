/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:52:09 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:52:11 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	unsigned int	cpt;

	res = NULL;
	i = 0;
	if (!s)
		return (0);
	cpt = ft_strlen((char *)s);
	res = (char *)malloc((cpt + 1) * sizeof(char));
	if (!res)
		return (res);
	while (i < cpt)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[cpt] = '\0';
	return (res);
}
/*
int main()
{
	char *s=NULL;
	printf("%s\n",s);
	char ff(unsigned int i, char c)
	{
		(void)i;
		return c-32;
	}
	printf("test 1\n");
	char 	*ss = ft_strmapi(s, ff);
	if (ss != NULL)
	{	printf("test 3\n");
	printf("%s\n",ss);
	free(ss);
	}
}*/
