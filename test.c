/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 08:20:55 by jfarinha          #+#    #+#             */
/*   Updated: 2018/01/12 15:10:16 by jfarinha         ###   ########.fr       */
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
	int		fd2;
    int     code;

	fd = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	line = NULL;

	code = get_next_line(fd, &line);
    printf("Code: %d, |%s|\n", code, line);

    code = get_next_line(fd, &line);
    printf("Code: %d, |%s|\n", code, line);

    code = get_next_line(fd, &line);
    printf("Code: %d, |%s|\n", code, line);

    code = get_next_line(fd, &line);
	printf("Code: %d, |%s|\n", code, line);

    code = get_next_line(fd, &line);
	printf("Code: %d, |%s|\n", code, line);

    ft_strdel(&line);
    close(fd);
	close(fd2);
	return (0);
}
