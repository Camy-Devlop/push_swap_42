/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:12:25 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 11:47:36 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_bool	ft_stack_empty(t_stack l)
{
	if (l == NULL)
		return (True);
	return (False);
}

t_element	ft_get_stack_first(t_stack l)
{
	if (ft_stack_empty(l))
		return (NULL);
	return (l->begin);
}

t_element	ft_get_stack_end(t_stack l)
{
	if (ft_stack_empty(l))
		return (NULL);
	return (l->end);
}

t_stack	ft_create_stack(void)
{
	return (ft_calloc(1, sizeof(struct s_stack)));
}

t_stack	*ft_create_nb_stack(size_t nb)
{
	int		i;
	t_stack	*s;

	if (nb <= 0)
		return (NULL);
	s = ft_calloc(nb + 1, sizeof(t_stack));
	if (!s)
		return (NULL);
	i = 0;
	while (i < (int)nb)
	{
		s[i] = ft_create_stack();
		if (!s[i])
		{
			while (0 <= i)
				ft_free_stack(s[i--]);
			return (NULL);
		}
		i++;
	}
	return (s);
}
