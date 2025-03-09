/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:49:30 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:49:37 by isadbaib         ###   ########.fr       */
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

char	*ft_itoa_perso(int n, char *res)
{
	int		i;
	long	nn;
	int		signe;

	nn = n;
	signe = 1;
	i = ft_nb_nbr(nn);
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

void	ft_putnbr_fd(int n, int fd)
{
	char	buf[12];
	size_t	nb_cpy_char;

	ft_itoa_perso(n, buf);
	nb_cpy_char = ft_strlen(buf);
	if (nb_cpy_char == 0)
		return ;
	(void)write(fd, buf, ft_strlen(buf));
}
/*
int main()
{
	int i= -15;
	while(i<=15)  
	{
  		ft_putnbr_fd(i,1);
		printf("\n");
		i++;
 	} 
return 0;
}*/
