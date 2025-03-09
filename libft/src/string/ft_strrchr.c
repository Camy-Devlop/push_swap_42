/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:52:51 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:52:53 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (0 <= len)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
