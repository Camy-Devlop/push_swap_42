/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:53:06 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:53:08 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		++start;
	while (start < end && ft_isset(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}
/*
char	*ft_strtrim(char const *s, char const *set)
{
	int		len_set;
	int		len_s;
	char	*c;
	char	*set2;

	set2 = (char *)set;
	if (!set)
		*set2 = '\0';
	len_set = ft_strlen(set2);
	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (ft_strncmp(s, set2, len_set) == 0 && set2)
	{
		len_s -= len_set;
		s += len_set;
	}
	if (ft_strncmp((s + len_s - len_set), set2, len_set) == 0)
		len_s -= len_set;
	c = ft_calloc(len_s + 1, sizeof(char));
	if (!c)
		return (0);
	ft_strlcpy(c, s, len_s + 1);
	return (c);
}*/
/*
int main()
{
	char *d= "bonjour comment tu vas //";
	printf("avant =  \"%s\"\n",d);
	printf("res   =  \"%s\"\n",ft_strtrim(d, "//"));
}*/
