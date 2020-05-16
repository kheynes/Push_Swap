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
#include <fcntl.h>
#include <stdio.h>

int      main(int ac, char **av)
{
	char    **line;
	int     fd = 0;

	if (ac < 2)
	{
		write(1, "\n", 1);
		exit(1);
	}

	char        **str;
	int         i;
	t_stack*    stack_a;
	t_stack*    stack_b;

	str = ft_strsplit(av[1], ' ');
	i = 0;
	stack_a = NULL;
	stack_b = NULL;

	while (str[i])
	{
		push(&stack_a, ft_atoi(str[i]));
		i++;
	}
	print_stack(stack_a);

	line = ft_memalloc(sizeof(char **));
	while ((get_next_line(fd, line)) > 0)
	{
		if (ft_strequ(*line, "sa"))
			swap(&stack_a);
		else if (ft_strequ(*line, "sb"))
			swap(&stack_b);
		else if (ft_strequ(*line, "ss"))
		{
			swap(&stack_a);
			swap(&stack_b);
		}
		else if (ft_strequ(*line, "pa"))
			push_op(&stack_b, &stack_a);
		else if (ft_strequ(*line, "pb"))
			push_op(&stack_a, &stack_b);
		else if (ft_strequ(*line, "ra"))
			rotate(&stack_a);
		else if (ft_strequ(*line, "rb"))
			rotate(&stack_b);
		else if (ft_strequ(*line, "rr"))
		{
			rotate(&stack_a);
			rotate(&stack_b);
		}
		else if (ft_strequ(*line, "rra"))
			reverse_rotate(&stack_a);
		else if (ft_strequ(*line, "rrb"))
			reverse_rotate(&stack_b);
		else if (ft_strequ(*line, "rrr"))
		{
			reverse_rotate(&stack_a);
			reverse_rotate(&stack_b);
		}
		else
			ft_putstr("\033[0;31mInvalid Command!\n\033[0m");
		
		print_stack(stack_a);
		ft_putstr("---\n");
		print_stack(stack_b);
	}

	return 0;
}