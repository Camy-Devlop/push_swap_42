/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:46:33 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:46:37 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
void r(void *i)
{
	while (*((char*)i))
	{
		*((char*)i)= toupper(*((char*)i));
		i++;
	}

}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*l;

	l = lst;
	while (l)
	{
		f(l->content);
		l = l->next;
	}
}
/*
void affiche(t_list *l)
{
	t_list *t;

	if (!l)
		return ;
	t = l;
	while (t)
	{
		if(t->content !=NULL)
			printf("%s\n",(char*)t->content);
		t = t->next;
	}
}
int main()
{
	t_list *l;
	l = malloc(sizeof(t_list));
	l->content = (void*)strdup("bonjour");
	l->next = malloc(sizeof(t_list));
	l->next->content = (void*)strdup("salut");
	l->next->next = NULL;
	ft_lstiter(l,r);
	affiche(l);
	return 0;
}*/
