/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 17:55:40 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/07 17:55:40 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct      	s_stack
{
    int         		data;
    struct s_stack		*next;
}						t_stack;

/* *************** */
/* stack_functions */
/* *************** */

t_stack*    newNode(int data);
int         isEmpty(t_stack* root);
void        push(t_stack** root, int data);
int         pop(t_stack** root);
void        print_stack(t_stack* root);

#endif
