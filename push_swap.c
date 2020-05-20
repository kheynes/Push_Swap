/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 10:52:29 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/17 10:52:29 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    run_operation(char *str, t_stack** stack_a, t_stack** stack_b)
{
	perform_op(&str, stack_a, stack_b);
	ft_putendl(str);
}

void    norm(t_stack** stack, int len)
{
	t_stack*	i;
	t_stack*	j;

	i = *stack;

	while(i)
	{
		i->index = len;
		j = *stack;
		while(j)
		{
			if(i->data < j->data)
				i->index--;
			j = j->next;
		}
		i = i->next;
	}
	i = *stack;
	
	while(i)
	{
		i->data = i->index;
		i = i->next;
	}
}

int     main(int ac, char **av)
{
	t_stack*    stack_a;
	t_stack*    stack_b;

	if (ac < 2)
		return (0);

	stack_a = NULL;
	stack_b = NULL;

	make_stack(&stack_a, av, ac);
	is_duplicate(&stack_a);
	norm(&stack_a, size(&stack_a));
	
	if (check_stack(&stack_a, &stack_b))
		exit(1);
	if (size(&stack_a) <= 3)
		sort_three(&stack_a, &stack_b);
	if(size(&stack_a) <= 500)
		sort_five(&stack_a, &stack_b);
	
	free_stack(&stack_a);
	free_stack(&stack_b);

	return(0);
}