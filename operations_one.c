/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 00:27:36 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/16 00:27:36 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap(t_stack** stack)
{
	int			first;
	int			second;

	if (size(stack) < 2)
		return ;
	
	first = pop(stack);
	second = pop(stack);
	push(stack, first);
	push(stack, second);
}

void		push_op(t_stack** from, t_stack** to)
{
	int			top;

	if (size(from) < 1)
		return ;
	
	top = pop(from);
	push(to, top);
}

void		rotate(t_stack** stack)
{
	t_stack*	first;
	t_stack*	end;

	if (size(stack) < 2)
		return ;

	first = *stack;
	end = *stack;

	while(end->next != NULL)
	{
		end = end->next;
	}

	*stack = (*stack)->next;
	end->next = first;
	first->next = NULL;
}

void		reverse_rotate(t_stack** stack)
{
	t_stack*	secondLast;
	t_stack*	last;

	if (size(stack) < 2)
		return ;

	secondLast = NULL;
	last = *stack;

	while(last->next != NULL)
	{
		secondLast = last;
		last = last->next;
	}

	secondLast->next = NULL;
	last->next = *stack;
	*stack = last;
}