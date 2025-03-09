/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:45:21 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:45:23 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_nb_nbr(long n)
{
	int	i;

	i = 1;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_itoa2(char *res, int i, long n)
{
	if (!res || n <= 0)
		return ;
	while (n != 0)
	{
		res[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	long	nn;
	int		signe;
	char	*res;

	nn = n;
	signe = 1;
	i = ft_nb_nbr(nn);
	res = malloc(i * sizeof(char));
	if (!res)
		return (NULL);
	if (nn < 0)
	{
		res[0] = '-';
		signe = -1;
		nn *= -1;
	}
	if (signe < 0)
		ft_itoa2(&res[1], i - 3, nn);
	if (signe > 0)
		ft_itoa2(res, i - 2, nn);
	if (nn == 0)
		res[0] = '0';
	res[i - 1] = '\0';
	return (res);
}
/*
int main()
{
    int i = -50;
    while(i <= 50){
    printf("%d %s\n",i, ft_itoa(i));
    i++;
  }
  printf("%d %s\n",INT_MIN, ft_itoa(INT_MIN));
    printf("%d %s\n",INT_MAX, ft_itoa(INT_MAX));


    return 0;
}
//gcc -Wall -Wextra -Werror ft_itoa.c -o a*/
