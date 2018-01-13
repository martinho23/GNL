/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/28 19:57:38 by jfarinha          #+#    #+#             */
/*   Updated: 2018/01/12 13:26:27 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETNEXTLINE_H
# define GETNEXTLINE_H
# define BUFF_SIZE 32

typedef struct	s_fd_handler
{
	int					fd;
	int					line_nb;
	char				*buf;
	struct s_fd_handler	*nextfd;
}				t_fd_handler;


int				get_next_line(int fd, char **line);
int				readf(t_fd_handler *handler);
void			process(t_fd_handler *handler, char **line);
void			delfd(t_fd_handler **handler);
t_fd_handler	*newfd(int fd);

#endif
