/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:46:01 by kheynes           #+#    #+#             */
/*   Updated: 2019/09/24 13:11:18 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*line;
	int		ret;
	int		fd;
	int		count;

	count = 0;
	ret = 1;
	if (ac != 2)
	{
		printf("No file specified !!\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line) > 0))
	{
		free(line);
		count++;
	}
	close(fd);
	printf("%d lines were read\n", count);
	printf("OK\n");
	return (0);
}
