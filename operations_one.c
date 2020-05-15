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

int		size(t_stack **root)
{
	int			i;
	t_stack*	temp;

	i = 0;
	temp = *root;
	
	while(temp)
	{
		i++;
		temp = temp->next;
	}
	return(i);
}

void		swap(t_stack** stack)
{
	int first;
	int second;

	if (size(stack) < 2)
		return ;
	
	first = pop(stack);
	second = pop(stack);
	push(stack, first);
	push(stack, second);
}

void		push_op(t_stack** from, t_stack** to)
{
	int top;

	if (size(from) < 1)
		return ;
	
	top = pop(from);
	push(to, top);
}