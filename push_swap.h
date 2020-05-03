/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 14:55:24 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/01 14:55:24 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct      s_stack
{
    int             num;
    int             normed;
    struct          s_stack *next;
    struct          s_stack *prev;
}                   t_stack;

//operations
void        sa(t_stack **stack_a, int i);

//validation
int         check_size(t_stack **top);

#endif