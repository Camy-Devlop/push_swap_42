/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:44:15 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/12 11:54:24 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	run(t_stack *stacks, t_instruct **data_instruct)
{
	ft_norm(stacks[0]);
	ft_medium(stacks[0]);
	algo(stacks, data_instruct);
	ft_show_instruction(*data_instruct);
}

static void	finish_free(t_stack *stacks, t_instruct *data_instruct, t_table *t)
{
	ft_free_stack(stacks[0]);
	ft_free_stack(stacks[1]);
	free(stacks);
	ft_free_instruction(data_instruct);
	ft_free_table(t);
}

int	main(int n, char **tab)
{
	char		*v;
	t_table		*t;
	t_stack		*stacks;
	t_instruct	*data_instruct;

	data_instruct = NULL;
	if (n <= 1)
		return (0);
	if (ft_check((void *)(tab + 1), n - 1, 1) == False)
		return (1);
	v = fusion(tab + 1, n - 1);
	if (ft_check(v, 0, 2) == False)
		return (1);
	t = ft_split_str_int(&v);
	if (ft_check(t, 0, 3) == False)
		return (1);
	stacks = ft_create_nb_stack(2);
	add_element(t, stacks[0]);
	if (ft_stack_empty(stacks[0]) == True)
		ft_printf("liste vide\n");
	run(stacks, &data_instruct);
	finish_free(stacks, data_instruct, t);
	stacks = NULL;
	data_instruct = NULL;
}
