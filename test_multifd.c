/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_multifd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <jfarinha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:05:36 by jfarinha          #+#    #+#             */
/*   Updated: 2018/03/26 21:24:09 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

int		main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	int		rv1;
	int		rv2;
	int		rv3;
	char	*line1;
	char	*line2;
	char	*line3;

	fd1 = open("test.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	line1 = NULL;
	line2 = NULL;
	line3 = NULL;
	rv1 = get_next_line(fd1, &line1);
	printf("L1 Code: %d |%s|\n", rv1, line1);
	free(line1);
	rv2 = get_next_line(fd2, &line2);
	printf("L2 Code: %d |%s|\n", rv2, line2);
	free(line2);
	rv3 = get_next_line(fd3, &line3);
	printf("L3 Code: %d |%s|\n", rv3, line3);
	free(line3);
	rv1 = get_next_line(fd1, &line1);
	printf("L1 Code: %d |%s|\n", rv1, line1);
	free(line1);
	rv2 = get_next_line(fd2, &line2);
	printf("L2 Code: %d |%s|\n", rv2, line2);
	free(line2);
	rv3 = get_next_line(fd3, &line3);
	printf("L3 Code: %d |%s|\n", rv3, line3);
	free(line3);
	rv1 = get_next_line(fd1, &line1);
	printf("L1 Code: %d |%s|\n", rv1, line1);
	free(line1);
	rv2 = get_next_line(fd2, &line2);
	printf("L2 Code: %d |%s|\n", rv2, line2);
	free(line2);
	rv3 = get_next_line(fd3, &line3);
	printf("L3 Code: %d |%s|\n", rv3, line3);
	free(line3);
	rv1 = get_next_line(fd1, &line1);
	printf("L1 Code: %d |%s|\n", rv1, line1);
	free(line1);
	rv2 = get_next_line(fd2, &line2);
	printf("L2 Code: %d |%s|\n", rv2, line2);
	free(line2);
	rv3 = get_next_line(fd3, &line3);
	printf("L3 Code: %d |%s|\n", rv3, line3);
	free(line3);
	return (0);
}
