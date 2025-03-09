/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fusion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:00:37 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 13:01:00 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

char	*fusion(char **str, size_t n)
{
	char	*new;
	char	*tmp;
	size_t	i;

	if (!*str)
		return (NULL);
	if (n == 0)
		return (NULL);
	i = 0;
	new = ft_strdup("");
	if (!new)
		return (NULL);
	while (i < n)
	{
		tmp = ft_strjoin(new, str[i++]);
		if (!tmp)
			return (free(new), NULL);
		free(new);
		new = ft_strjoin(tmp, " ");
		if (!new)
			return (free(new), NULL);
		free(tmp);
		tmp = NULL;
	}
	return (new);
}
