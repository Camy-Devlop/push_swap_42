/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:45:42 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:45:46 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*t;

	if (!new || !alst)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	t = *alst;
	while (t->next != NULL)
		t = t->next;
	t->next = new;
	if (!t->next->next)
		t->next->next = NULL;
}
