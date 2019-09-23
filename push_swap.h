/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 10:21:20 by kheynes           #+#    #+#             */
/*   Updated: 2019/09/23 11:05:46 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_astack
{
	int				a;
	struct s_astack	*next;
}				t_astack;

typedef struct	s_bstack
{
	int				b;
	struct s_bstack	*next;
}				t_bstack;
#endif
