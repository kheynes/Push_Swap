/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:21:20 by kheynes           #+#    #+#             */
/*   Updated: 2019/09/19 10:42:36 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	stack_a
{
	int				a;
	struct stack_a	*next;
}				stack_a;

typedef struct	stack_b
{
	int				b;
	struct stack_b	*next;
}				stack_b;
#endif
