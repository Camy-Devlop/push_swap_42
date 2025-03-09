/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:47:11 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:47:13 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
void *r(void *i)
{
	void *d=i;
	while (*((char*)i))
	{
		*((char*)i)= toupper(*((char*)i));
		i++;
	}
	return d;
}

void g(void *i)
{
	while (*((char*)i))
	{
		*((char*)i)= 0;
		i++;
	}
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*l;
	t_list	*new;
	t_list	*next;

	if (!lst || !f)
		return (NULL);
	l = lst;
	new = NULL;
	while (l)
	{
		next = l->next;
		l = ft_lstnew(f(l->content));
		if (!l)
		{
			ft_lstclear(&l, del);
			return (NULL);
		}
		ft_lstadd_back(&new, l);
		l = next;
	}
	return (new);
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
	affiche(l);
	t_list *f = ft_lstmap(l,&r,&g);
	affiche(f);
	return 0;
}*/
