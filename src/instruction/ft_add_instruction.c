/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_instruction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:12:04 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/14 13:12:22 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_instruct	*ft_creat_instruct(char *str)
{
	t_instruct	*i;

	if (!str)
		return (NULL);
	i = ft_calloc(1, sizeof(struct s_instruct));
	if (!i)
		return (NULL);
	i->str = strdup(str);
	if (!i->str)
		return (ft_free_instruction(i), NULL);
	return (i);
}

void	ft_add_instruction(t_instruct **n, char *str)
{
	if (*n)
		return (ft_add_instruction(&((*n)->next), str));
	if (!*n)
		*n = (ft_creat_instruct(str));
	if (!*n)
		return (ft_free_instruction(*n));
}
