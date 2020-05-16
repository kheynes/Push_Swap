/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 22:54:57 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/16 22:54:57 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap_both(t_stack** stack_a, t_stack** stack_b)
{
    if(stack_a && stack_b)
    {
        swap(stack_a);
        swap(stack_b);
    }
}

void		rotate_both(t_stack** stack_a, t_stack** stack_b)
{
	if(stack_a && stack_b)
	{
		rotate(stack_a);
		rotate(stack_b);
	}
}

void		reverse_rotate_both(t_stack** stack_a, t_stack** stack_b)
{
	if(stack_a && stack_b)
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
	}
}