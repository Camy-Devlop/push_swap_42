/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:01:32 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/03 15:14:50 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_show_instruction(t_instruct *n)
{
	if (!n)
		return ;
	ft_printf("%s\n", n->str);
	ft_show_instruction(n->next);
}
