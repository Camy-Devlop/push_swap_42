/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_gnl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:00:40 by isadbaib          #+#    #+#             */
/*   Updated: 2024/12/02 12:01:09 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlen_gnl(const char *str, char c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}
