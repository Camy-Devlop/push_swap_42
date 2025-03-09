/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:51:10 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 23:04:55 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*dest;
	size_t		s1_len;
	size_t		s2_len;
	size_t		i;

	dest = NULL;
	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (s1_len != 0 || s2_len != 0)
	{
		while (i < (s2_len + s1_len))
		{
			if (i < s1_len)
				dest[i] = s1[i];
			if (i < s2_len)
				dest[i + s1_len] = s2[i];
			i++;
		}
	}
	dest[s1_len + s2_len] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// char *dd=ft_strjoin("","");
// printf("\"%s\" == %p\n",dd, (void*)dd);
//   return (0);
// }
