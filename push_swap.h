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
/* stack */
/* ******* */

int			check_stack(t_stack** stack_a, t_stack** stack_b);
void		make_stack(t_stack** stack, char **str);
void		perform_op(char **line, t_stack** stack_a, t_stack** stack_b);
void		run_check(t_stack** stack_a, t_stack** stack_b);
int			check_three(t_stack** stack_a);

/* ************** */ 
/* error_handling */
/* ************** */

void		invalid_command(t_stack** stack_a, t_stack** stack_b);
void		is_duplicate(t_stack** stack_a);
void		is_integer(char *str, t_stack** stack_a);
void		free_stack(t_stack** stack);

/* ********* */
/* push_swap */
/* ********* */

void		run_operation(char *str, t_stack** stack_a, t_stack** stack_b);

/* ********* */
/* algorithm */
/* ********* */

int			largest(t_stack** stack);
int			smallest(t_stack** stack);
void		sort_three(t_stack** stack_a, t_stack** stack_b);
void		sort_five(t_stack** stack_a, t_stack** stack_b);

#endif
