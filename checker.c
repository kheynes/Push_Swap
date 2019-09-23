/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:46:01 by kheynes           #+#    #+#             */
/*   Updated: 2019/09/23 11:12:42 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char	*line;
	int		ret;
	int		fd;
	int		count;

	count = 0;
	ret = 1;
	fd = open("test.txt", O_RDONLY);
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
