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
void        push(t_stack** root, int data);
int         pop(t_stack** root);
int         size(t_stack** root);
void        print_stack(t_stack* root);

/* ********** */
/* operations */
/* ********** */

void        swap(t_stack** stack);
void        push_op(t_stack** from, t_stack** to);
void        rotate(t_stack** stack);
void        reverse_rotate(t_stack** stack);
void		swap_both(t_stack** stack_a, t_stack** stack_b);
void		rotate_both(t_stack** stack_a, t_stack** stack_b);
void		reverse_rotate_both(t_stack** stack_a, t_stack** stack_b);

/* ******* */
/* checker */
/* ******* */

int			check_stack(t_stack** stack_a, t_stack** stack_b);
void		make_stack(t_stack** stack, char **str);
void		run_check(t_stack** stack_a, t_stack** stack_b);

#endif
