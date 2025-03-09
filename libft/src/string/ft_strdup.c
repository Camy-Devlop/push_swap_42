/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:50:42 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:50:44 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*d;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	d = (char *)malloc(((i + 1) * sizeof(char)));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*
int main()
{
	char *s="";
	char *d;
	char *d1;
	d = (char*)ft_strdup(s);
	printf("cpy \"%s\"\n",d);
	printf("avant la longeur chaine %zu\n",ft_strlen(d));
	free(d);
	printf("avant la longeur chaine %zu\n",ft_strlen(d));
	d1 =(char *) strdup(s);
	printf("org \"%s\"\n",d1);
	printf("apres la longeur chaine %zu info \"%s\"\n",ft_strlen(d1),d1);
    free(d1);
	printf("apres la longeur chaine %zu info %s\n",ft_strlen(d1),d1);
return 0;	
}*/
