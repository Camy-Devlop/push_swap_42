/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:50:00 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:50:04 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	*ft_free(char **data, int i)
{
	while (0 <= i)
		free(data[i--]);
	free(data);
	return (NULL);
}

const char	*ignore_sep(char const *s, char c)
{
	while (*s == c && *s)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)ft_calloc((ft_count_word(s, c) + 1), sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		s = ignore_sep(s, c);
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i] = ft_substr(s, 0, word_len);
			if (!lst[i])
				return (ft_free(lst, i));
			i++;
			s += word_len;
		}
	}
	return (lst[i] = NULL, lst);
}
/*
int main(int n, char **tab)
{
	if (3 == n)
	{
		int i =0;
		char *s = tab[1];
		char **d = ft_split(s, *tab[2]);

		while(i < 1)
		{

			printf("%s\n",d[0]);
		}
		i  = 0;
	//	while (i < 1)
	//		free(d[i++]);
	//	free(d);
		system("leaks a " );
	}

}
*/
