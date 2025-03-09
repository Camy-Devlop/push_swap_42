/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:30:18 by isadbaib          #+#    #+#             */
/*   Updated: 2025/02/18 16:51:27 by isadbaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include <string.h>

//# define io_nerone 6442450944

typedef enum e_bool
{
	False,
	True
}	t_bool;

typedef struct s_best_friend
{
	int	best;
	int	v;
	int	nb_move;
	int	cost;
}	*t_best_friend;

typedef struct s_instruct	t_instruct;
typedef struct s_element	*t_element;

typedef struct s_instruct
{
	size_t		*nb;
	char		*str;
	t_instruct	*next;

}	t_instruct;

typedef struct s_table
{
	size_t	n;
	char	**tab_str;
	int		*tab_int;
}	t_table;
typedef struct s_element
{
	int			i;
	int			v;
	float		norm;
	t_element	prev;
	t_element	next;
}	*t_element;
typedef struct s_stack
{
	size_t		length;
	float		medium;
	t_element	begin;
	t_element	end;
}	*t_stack;

/*  function check */
t_bool		ft_check_double(int *tab, size_t size);
t_bool		ft_check(void *obj, size_t n, size_t chk);
t_bool		check_lower_middle(t_stack s);
t_bool		check_upper_middle(t_stack s);
t_bool		ft_check_croissant(t_stack s);
t_bool		ft_check_decreasing(t_stack s);
/*  function  */
char		*fusion(char **str, size_t n);
int			ft_push_swap_atoi(const char *str, t_table *t, char *strs);
t_table		*ft_split_str_int(char **str);
t_stack		ft_create_stack(void);
t_stack		*ft_create_nb_stack(size_t nb);
/* function move  */
t_bool		ft_swap(t_stack t);
t_bool		ft_sswap(t_stack a, t_stack b);
t_bool		ft_push(t_stack a, t_stack b);
t_bool		ft_invert_rotation(t_stack a);
t_bool		ft_rr_invert_rotation(t_stack a, t_stack b);
t_bool		ft_rotation(t_stack a);
t_bool		ft_rr(t_stack a, t_stack b);
/* function instruction */
void		ft_swap_instruct(t_stack t, t_instruct **i, char c);
void		ft_sswap_instruct(t_stack a, t_stack b, t_instruct **i);
void		ft_push_instruction(t_stack a, t_stack b, t_instruct **i, char c);
void		ft_invert_rotation_instruct(t_stack a, t_instruct **i, char c);
void		ft_rr_invert_rota_instruct(t_stack a, t_stack b, t_instruct **i);
void		ft_rotation_instruct(t_stack a, t_instruct **i, char c);
void		ft_rr_instruct(t_stack a, t_stack b, t_instruct **i);
/* function ...*/
void		ft_update_index(t_stack s);
t_bool		ft_stack_empty(t_stack l);
void		ft_show_instruction(t_instruct *n);
void		ft_show_stack(size_t nb, t_stack *s);
void		ft_add_instruction(t_instruct **n, char *str);
void		ft_free_table(t_table *t);
t_stack		ft_create_stack(void);
t_element	ft_create_element(int v, t_stack base, t_element prev);
int			ft_search_max(t_stack s);
int			ft_search_min(t_stack s);
void		ft_norm(t_stack s);
void		add_element(t_table *t, t_stack s);
void		ft_index_less(t_element e);
void		ft_free_element_all(t_element e);
void		ft_free_stack(t_stack n);
void		ft_free_instruction(t_instruct *e);
void		ft_medium(t_stack s);
t_bool		ft_error(int err);
/* algo */
void		algo(t_stack *s, t_instruct **i);
void		ft_algo_n3(t_stack *s, t_instruct **i, char c);
void		algo_b_n3(t_stack *s, t_instruct **i);
void		algo2s0(t_stack *s, t_instruct **i);
void		algo2s1(t_stack *s, t_instruct **i);
int			*smallest(t_stack s, int *t);
void		biggest(t_stack s, int *t);
void		algo3(t_stack *s, t_instruct **i);
#endif
