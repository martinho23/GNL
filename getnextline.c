/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 19:57:25 by jfarinha          #+#    #+#             */
/*   Updated: 2017/12/28 19:59:25 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "getnextline.h"
#include "libft/libft.h"

int				getnextline(int fd, char **line)
{
	static t_fd_handler	*f = NULL;
	t_fd_handler		*tmp;

	(void)line;
	if (!f && !(f = newfd(fd)))
		return (-1);
	tmp = f;
	while (tmp != NULL && tmp->fd != fd)
		tmp = tmp->nextfd;
	if (tmp == NULL && !(tmp = newfd(fd)))
			return (-1);
	return (1);
}

t_fd_handler	*newfd(int fd)
{
	t_fd_handler *handler;
	if ((handler = (t_fd_handler*)malloc(sizeof(*handler))))
	{
		handler->fd = fd;
		handler->line_nb = 0;
		handler->nextfd = NULL;
	}
	return (handler);
}

int				readfd(t_fd_handler *handler)
{
	int		rdc;
	char	buff[BUFFSIZE + 1];

	while (handler->line_nb == 0 && (rdc = read(handler->fd, buff, BUFFSIZE)))
	{
		
	}
	return (0);
}

