/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:46:09 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:46:11 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
void del(void *l)
{
	int i = 0;
	while (((char*)l)[i] != NULL)
	{
		((char*)l)[i] = '\0';
		i++;
	}
}*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!lst)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
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
	ft_lstclear(&l,del);
	//affiche(l);
	//  return 0;
}*/
