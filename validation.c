/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:12:59 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/01 15:12:59 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     check_size(t_stack **top)
{
    int         i;
    t_stack     *stack;

    i = 0;
    stack = *top;
    
    while(stack)
    {
        i++;
        stack = stack->next;
    }
    return(i);
}