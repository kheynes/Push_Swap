/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:00:30 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/17 15:00:30 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     largest(t_stack** stack)
{
    int         i;
	int			largest;
	int			value;
    t_stack*    temp;

    i = 0;
	largest = 0;
	temp = *stack;
	value = -2147483648;

    while(temp != NULL)
    {
        if (temp->data > value)
		{
			largest = i;
			value = temp->data;
		}
		i++;
		temp = temp->next;
    }
	return (largest);
}

int		smallest(t_stack** stack)
{
	int			i;
	int			smallest;
	int			value;
	t_stack*	temp;

	i = 0;
	smallest = 0;
	temp = *stack;
	value = 2147483647;
	while(temp != NULL)
	{
		if (temp->data < value)
		{
			smallest = i;
			value = temp->data;
		}
		i++;
		temp = temp->next;
	}
	return (smallest);
}

void	sort_three(t_stack** stack_a, t_stack** stack_b)
{
	t_stack*	temp;

	while(!(check_three(stack_a)))
	{
    	temp = *stack_a;

    	if(temp->data > temp->next->data)
    		run_operation("sa", stack_a, stack_b);       	

        temp = temp->next;
		if(!(check_three(stack_a)))
		{
        	if(temp->data > temp->next->data)
        		run_operation("rra", stack_a, stack_b);
        	else
    			run_operation("ra", stack_a, stack_b);
		}
    }
}

void	sort_five(t_stack** stack_a, t_stack** stack_b)
{
    int    rotate;
    int    i;

    while (!(check_stack(stack_a, stack_b)) && size(stack_a) > 3)
    {
        i = 0;
        rotate = smallest(stack_a);
        if (rotate > size(stack_a) / 2)
        {
            while (i++ < size(stack_a) - rotate)
            	run_operation("rra", stack_a, stack_b);
        }
        else
            while (i++ < rotate)
            	run_operation("ra", stack_a, stack_b);
        if (!(check_stack(stack_a, stack_b)))
        {
        		run_operation("pb", stack_a, stack_b);
        }
    }
	sort_three(stack_a, stack_b);
    while (size(stack_b) > 0)
    	run_operation("pa", stack_a, stack_b);
}