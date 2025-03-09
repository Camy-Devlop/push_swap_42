/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:53:46 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:53:48 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
/*
	size_t i c'est je stock 3 variable parce que probleme de 
	norminette donc 
	i[0] = index pour me deplacer dans le str
	i[1] = index sur la string pour copier la partie que j'ai besoin 
	i[2] = la longueur de str de src
*/
char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	char	*res;
	size_t	i[3];

	i[0] = 0;
	i[2] = ft_strlen(src);
	res = (char *)dst;
	if (!res || (*dst == '\0' && *src != '\0') || (len < i[2]))
		return (NULL);
	if (*dst == '\0' || *src == '\0'
		|| (i[2] == 0 || (dst && src && len == 0)))
		return (res);
	while (*res != '\0' && i[0] < len)
	{
		i[1] = 0;
		while (*res != '\0' && src[i[1]] != '\0'
			&& (res[i[1]] == src[i[1]]) && i[0] + i[1] < len)
		{
			if (i[1] == i[2] - 1)
				return (res);
			i[1]++;
		}
		res++;
		i[0]++;
	}
	return (NULL);
}
/*
typedef struct	s_sub{
	char	*d;
	char	*s;
	int		size; 
}	t_sub;

static void ft_test_strnstr(t_sub *tab,int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d :copy %s\n",i+1,ft_strnstr(tab[i].d,tab[i].s,tab[i].size));
		printf("%d :offi %s\n",i+1,   strnstr(tab[i].d,tab[i].s,tab[i].size));
		i++;
		printf("\n");
	}
}
int main()
{
	    t_sub tab[14];
	//	char  *tab[14*2]; //calloc(14*2,sizeof(char**));
		tab[0].d = "aaabcabcd";
		tab[0].s = strdup("aabc");
		tab[0].size = 0;
 
		tab[1].d = "aaabcabcd";
		tab[1].s = "aabc";
		tab[1].size = -1;
 
		tab[2].d = "aaabcabcd";
		tab[2].s = "a";
		tab[2].size = -1;
 
		tab[3].d = "aaabcabcd";
		tab[3].s = "c";
		tab[3].size = -1; 

		tab[4].d = (char*)"";
		tab[4].s = strdup("");
        tab[4].size = -1; 
 
 
		tab[5].d = (char*)"";
		tab[5].s = "";
        tab[5].size = 0 ;
	
		tab[6].d = (char*)"";
		tab[6].s = "coucou";
        tab[6].size = -1; 
		
		tab[7].d = (char*)"aaabcabcd";
		tab[7].s = "aaabc";
        tab[7].size = 5; 
		
		tab[8].d = (char*)"";
		tab[8].s = "12345";
        tab[8].size = 5; 
		
		tab[9].d = (char*)"aaabcabcd";
		tab[9].s = "abcd";
        tab[9].size = 9; 
		
		tab[10].d = (char*)"aaabcabcd";
		tab[10].s = "cd";
        tab[10].size = 8; 
		
		tab[11].d = (char*)"aaabcabcd";
		tab[11].s = "a";
        tab[11].size = 1; 
		
		tab[12].d = (char*)"1";
		tab[12].s = "a";
        tab[12].size = 1; 
		
		tab[13].d = (char*)"22";
		tab[13].s = "b";
        tab[13].size = 2; 
		ft_test_strnstr(tab,14);
		
		
	    
}*/
/*
int main()
{
	char *d= "A";
	char *s="A";
	int size = 2;
	int pos =0;
	int pos2 =13;
	printf("offi :\"%s\"\ncopy :\"%s\"\n",
		strnstr(d+pos,s+pos,size),fttrnstr(d+pos,s+pos2,size));
//	char *d="aaabcabcd";
	char *s="abcd";
	char *v=(char*)"";
	size_t i = 10;
	(void)v;
	(void)d;
	(void)s;
	printf("copy %s\n",fttrnstr(d,s,i));
	printf("offi %s\n",strnstr(d,s,i));
}*/
