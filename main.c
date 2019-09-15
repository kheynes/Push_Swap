/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 09:47:06 by kheynes           #+#    #+#             */
/*   Updated: 2019/09/12 09:47:42 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
//int		main(void)
{
	char	**line;
	int		gnl_ret = 1;
	int		fd = 0;
	size_t	count = 0;

	if (ac != 2)
		printf("Please specify a file!");
	else
		fd = open(av[1], O_RDONLY);
//		fd = open("short_test.txt", O_RDONLY);
		line = malloc(sizeof(char**));
		printf("-------Start of File-------\n");
		while ((gnl_ret = get_next_line(fd, line)) > 0)
		{
			printf("%s\n", *line);
			free(*line);
			count++;
		}
		printf("-----------EOF-------------\n");
		close(fd);
		printf("%d lines printed\n", count);
		printf("FIN :D\n");
	return (0);
}