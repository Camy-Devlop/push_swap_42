/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_gnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:34:29 by isadbaib          #+#    #+#             */
/*   Updated: 2024/12/02 11:52:51 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char		*dest;
	size_t		s1_len;
	size_t		s2_len;
	size_t		i;

	dest = NULL;
	i = 0;
	s1_len = ft_strlen_gnl(s1, '\0');
	s2_len = ft_strlen_gnl(s2, '\n');
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
	return (free(s1), dest);
}
