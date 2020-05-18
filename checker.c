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
	t_stack*    stack_a;
	t_stack*    stack_b;

	if (ac < 2)
		return(0);

	stack_a = NULL;
	stack_b = NULL;
	
	make_stack(&stack_a, av, ac);
	is_duplicate(&stack_a);

	while ((get_next_line(0, line)) > 0)
	{
		perform_op(line, &stack_a, &stack_b);
		ft_strdel(line);
	}

	run_check(&stack_a, &stack_b);

	free_stack(&stack_a);
	free_stack(&stack_b);

	return 0;
}