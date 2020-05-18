/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:24:31 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/08 16:24:31 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	char    	*line[1];
	int     	fd;
	t_stack*    stack_a;
	t_stack*    stack_b;

	if (ac < 2)
		return(0);

	fd = 0;
	stack_a = NULL;
	stack_b = NULL;
	
	make_stack(&stack_a, &av[1]);
	is_duplicate(&stack_a);
	print_stack(stack_a);

	while ((get_next_line(fd, line)) > 0)
	{
		perform_op(line, &stack_a, &stack_b);
	}

	run_check(&stack_a, &stack_b);

	return 0;
}