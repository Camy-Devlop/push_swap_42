/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadbaibi <iadbaibi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:26:00 by iadbaibi          #+#    #+#             */
/*   Updated: 2024/12/02 10:48:09 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/ft_printf.h"
/*verifier leaks
void ft_leaks(void)
{
    char *pid_val = ft_itoa(getpid());
	char *command = strjoin("leaks --list ",pid_val);
	free(pid_val);
	system(command);
}
*/
int	ft_printf(const char *str, ...)
{
	va_list	ag;
	int		i;

	i = 0;
	if (!str)
		return (0);
	va_start(ag, str);
	while (*str)
	{
		if (str && *str == '%' && *(str + 1) != '\0' && *(str + 1))
		{
			str++;
			i += ft_check_type(str, &ag);
			str++;
			if (i < 0)
				return (-1);
		}
		else
		{
			write(1, str++, 1);
			i++;
		}
	}
	va_end(ag);
	return (i);
}
