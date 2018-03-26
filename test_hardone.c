/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 08:20:55 by jfarinha          #+#    #+#             */
/*   Updated: 2018/03/26 16:53:07 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft/libft.h"

int		main(void)
{
	char	*line;
	int		fd;
	int		code;

	fd = open("test4.txt", O_RDONLY);
	line = NULL;

	/**/while((code = get_next_line(fd, &line)) > 0)
	{
		printf("Code: %d, |%s|\n", code, line);
		ft_strdel(&line);
	}/**/
		code = get_next_line(fd, &line);
		printf("Code: %d, |%s|\n", code, line);
		ft_strdel(&line);
		code = get_next_line(fd, &line);
		printf("Code: %d, |%s|\n", code, line);
		ft_strdel(&line);
	close(fd);
	return (0);
}
