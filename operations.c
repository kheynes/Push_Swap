/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:02:03 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/01 15:02:03 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_stack **stack_a, int i)
{
    t_stack     *first;
    t_stack     *second;

    if (!(*stack_a) || (check_size(stack_a) < 2))
        return ;
    
    first = (*stack_a);
    second = (*stack_a)->next;
    first->prev = second;
    first->next = second->next;
    
}