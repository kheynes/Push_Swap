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

int		check_stack(t_stack** stack_a, t_stack** stack_b)
{
	if (size(stack_b) > 0)
	{
		return(0);
	}
	else
	{
		while ((*stack_a)->next != NULL)
		{
			if ((*stack_a)->next->data > (*stack_a)->data)
				*stack_a = (*stack_a)->next;
			else
			{
				return(0);
			}
		}
	}
	return(1);
}

void	make_stack(t_stack** stack, char **str)
{
	char	**array;
	int		i;

	array = ft_strsplit(*str, ' ');
	i = 0;

	while(array[i])
	{
		is_integer(array[i]);
		push(stack, ft_atoi(array[i]));
		i++;
	}

}

void	perform_op(char **line, t_stack** stack_a, t_stack** stack_b)
{
		if (ft_strequ(*line, "sa"))
			swap(stack_a);
		else if (ft_strequ(*line, "sb"))
			swap(stack_b);
		else if (ft_strequ(*line, "ss"))
			swap_both(stack_a, stack_b);
		else if (ft_strequ(*line, "pa"))
			push_op(stack_b, stack_a);
		else if (ft_strequ(*line, "pb"))
			push_op(stack_a, stack_b);
		else if (ft_strequ(*line, "ra"))
			rotate(stack_a);
		else if (ft_strequ(*line, "rb"))
			rotate(stack_b);
		else if (ft_strequ(*line, "rr"))
			rotate_both(stack_a, stack_b);
		else if (ft_strequ(*line, "rra"))
			reverse_rotate(stack_a);
		else if (ft_strequ(*line, "rrb"))
			reverse_rotate(stack_b);
		else if (ft_strequ(*line, "rrr"))
			reverse_rotate_both(stack_a, stack_b);	
		else 
			invalid_command();
		
		print_stack(*stack_a);
		ft_putstr("---\n");
		print_stack(*stack_b);
}

void	run_check(t_stack** stack_a, t_stack** stack_b)
{
	if (check_stack(stack_a, stack_b))
		ft_putstr("\033[1;32mOK\n\033[0m");
	else if (!(check_stack(stack_a, stack_b)))
		ft_putstr("\033[0;31mKO\n\033[0m");
}

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

	// line = ft_memalloc(sizeof(char **));
	while ((get_next_line(fd, line)) > 0)
	{
		perform_op(line, &stack_a, &stack_b);
	}

	run_check(&stack_a, &stack_b);

	return 0;
}