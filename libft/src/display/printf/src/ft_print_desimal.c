/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_desimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:43:40 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"
#include "../include/ft_printf.h"

/*
*	name : ft_print_desimal
*	param str	: premier partie les inforamation format flag d ou # ou . ou
*				  du nobre d'espace  ou de 0 avant le flag d
*
*	param arg	: la valeur entier stocker dans un va_list
*	
*	return int	: le nombre de carataire imprimier
*	error		: nombre negatif il y a eu un problem dans le flag oux
*				  le arg n'est pas un entier ou decimal 
				  -1 = error 

*/
int	ft_print_desimal(va_list *arg)
{
	char	*str;
	int		len_str;
	int		d;

	d = (int) va_arg(*arg, int);
	str = ft_itoa(d);
	len_str = (int)ft_strlen(str);
	if (!str)
		return (0);
	ft_putstr_fd(str, 1);
	len_str = (int)ft_strlen(str);
	free(str);
	return (len_str);
}
/*
fonction retier parce que 
int static ft_flag(char *str, t_element *e)
{
    int i;

    if (*str == '.' || *str == '#')
    {   
        e->flag[0] = *str;
        str++;
        while (ft_isdigit(*(str + i)))
        {   
            e->flag_value *= 10;
            e->flag_value += 48 - *(str + i);
            i++;
        }
        str += i;
        return (0);
    }   
    return (-1);
}
*/
