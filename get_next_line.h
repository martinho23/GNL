/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 19:57:38 by jfarinha          #+#    #+#             */
/*   Updated: 2017/12/28 20:10:05 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETNEXTLINE_H
# define GETNEXTLINE_H
# define BUFFSIZE 32

typedef struct	s_fd_handler
{
	int					fd;
	int					line_nb;
	char				*buf;
	struct s_fd_handler	*nextfd;
}				t_fd_handler;


int				readf(t_fd_handler *handler);
int				getnextline(int fd, char **line);
void			delfd(t_fd_handler *handler);
void			process(t_fd_handler *handler, char **line);
t_fd_handler	*newfd(int fd);

#endif
