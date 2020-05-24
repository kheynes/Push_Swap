/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_two.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:39:04 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/24 16:39:04 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_100(t_stack** stack_a, t_stack** stack_b)
{
	int		range;
	int		i;

	range = 0;
	i = 0;

	while(*stack_a)
	{
		range += 15;
		while(i < range)
		{
			if(!(*stack_a))
				break;
			if ((*stack_a)->data <= range)
			{
				run_operation("pb", stack_a, stack_b);
				i++;
			}
			else
				run_operation("ra", stack_a, stack_b);
		}
	}
	sorted(stack_a, stack_b, i);
}

void	sort_500(t_stack** stack_a, t_stack** stack_b)
{
	int		range;
	int		i;

	range = 0;
	i = 0;

	while(*stack_a)
	{
		range += 50;
		while(i < range)
		{
			if(!(*stack_a))
				break;
			if ((*stack_a)->data <= range)
			{
				run_operation("pb", stack_a, stack_b);
				i++;
			}
			else
				run_operation("ra", stack_a, stack_b);
		}
	}
	sorted(stack_a, stack_b, i);
}

void	sorted(t_stack** stack_a, t_stack** stack_b, int i)
{
	int		rotate;
	int		index;

	while(*stack_b)
	{
		while(i > 0)
		{
			index = 0;

			rotate = largest(stack_b);
			if(rotate > size(stack_b) / 2)
			{
				while(index++ < size(stack_b) - rotate)
					run_operation("rrb", stack_a, stack_b);
			}
			else
				while(index++ < rotate)
					run_operation("rb", stack_a, stack_b);
			run_operation("pa", stack_a, stack_b);
			i--;
		}
	}
}