/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isadbaib <isadbaib@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:41:58 by isadbaib          #+#    #+#             */
/*   Updated: 2024/12/02 11:43:59 by isadbaib         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/* a voir si de doit free f->d */
void	*free_simple(t_read_io *f, int fd)
{
	t_read_io	*tmp;

	if (!f)
		return (NULL);
	if (f->fd == fd)
	{
		tmp = f->next;
		free(f->d);
		free(f);
		f = tmp;
		return (tmp = NULL, f);
	}
	else if (f->next)
	{
		if (f->next->fd == fd)
		{
			tmp = f->next->next;
			free(f->next->d);
			free(f->next);
			return (f->next = tmp, f);
		}
		else
			f->next = free_simple(f->next, fd);
	}
	return (f);
}

static char	*read_fd(t_read_io *f)
{
	ssize_t	i;
	char	*tmp;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	i = 1;
	while (0 < i)
	{
		if (f->s[0] == '\0')
			i = read(f->fd, f->s, BUFFER_SIZE);
		if (i > 0)
		{
			f->d = ft_strjoin_gnl(f->d, f->s);
			ft_clean_buff(f->s, ft_strlen_gnl(f->s, '\n'));
		}
		if (i <= 0)
		{
			if ((!f->d && i == 0) || i < 0)
				return (NULL);
			return (tmp = f->d, tmp);
		}
		if (f->d[ft_strlen_gnl(f->d, '\n') - 1] == '\n' || i == 0)
			return (f->d);
	}
	return (NULL);
}

static void	*ft_find_fd(t_read_io **fds, int fd)
{
	if (!(*fds))
	{
		*fds = malloc(sizeof(t_read_io));
		if (!fds)
			return (NULL);
		ft_bzero_gnl(*fds, sizeof(t_read_io));
		(*fds)->fd = fd;
		return (*fds);
	}
	if ((*fds)->fd == fd)
		return (*fds);
	return (ft_find_fd(&(*fds)->next, fd));
}

char	*get_next_line(int fd)
{
	static t_read_io	*fds;
	char				*res;
	t_read_io			*f;

	if (fd < 0 || INT_MAX < fd)
		return (NULL);
	f = ft_find_fd(&fds, fd);
	f->d = NULL;
	res = read_fd(f);
	if (res == NULL)
		fds = free_simple(fds, fd);
	return (res);
}
