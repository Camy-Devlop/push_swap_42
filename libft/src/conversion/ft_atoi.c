/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:42:20 by isadbaib          #+#    #+#             */
/*   Updated: 2024/10/19 18:42:25 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_convert(const char *str, int signe)
{
	long	v;
	long	buff;

	v = 0;
	buff = 0;
	while (ft_isdigit(*str) && *str != '\0')
	{
		v *= 10;
		v += *str - '0';
		if (buff > v && signe > 0)
			return (-1);
		buff = v;
		str++;
	}
	return (signe * v);
}

int	ft_atoi(const char *str)
{
	int		signe;

	signe = 1;
	if (!str)
		return (0);
	while ((*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\f') && *str != '\0')
		str++;
	if (*str == '-' && ft_isdigit(*(str + 1)))
	{
		signe = -1;
		str++;
	}
	if (*str == '+' && ft_isdigit(*(str + 1)))
		str++;
	return (ft_convert(str, signe));
}
// int	main()
// {
// 	char *d="4545815445";
// 	// while (*d != '\0')
// 	// {
// 	// 	printf("%c valeur %d \n",(char)*d,ft_isalpha(*d));
// 	// 	d++;
// 	// }
// 	printf("%d\n", atoi(d));
// 	printf("%d\n", ft_atoi(d));
// 	printf("fin\n");
// }
