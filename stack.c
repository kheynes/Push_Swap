/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 11:33:37 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/17 11:33:37 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_stack(t_stack** stack_a, t_stack** stack_b)
{
    t_stack*	temp;

	temp = *stack_a;

	if (size(stack_b) > 0)
	{
		return(0);
	}
	else
	{
		while (temp->next != NULL)
		{
			if (temp->next->data > temp->data)
				temp = temp->next;
			else
			{
				return(0);
			}
		}
	}
	return(1);
}

void	make_stack(t_stack** stack, char **str)
{
	char	**array;
	int		i;
	int		len;

	array = ft_strsplit(*str, ' ');
	i = 0;
	len = 0;

	while(array[len])
	{
		len++;
	}
	
	i = len - 1;
	while(i >= 0)
	{
		is_integer(array[i], stack);
		push(stack, ft_atoi(array[i]));
		i--;
	}

}

void	perform_op(char **line, t_stack** stack_a, t_stack** stack_b)
{
		if (ft_strequ(*line, "sa"))
			swap(stack_a);
		else if (ft_strequ(*line, "sb"))
			swap(stack_b);
		else if (ft_strequ(*line, "ss"))
			swap_both(stack_a, stack_b);
		else if (ft_strequ(*line, "pa"))
			push_op(stack_b, stack_a);
		else if (ft_strequ(*line, "pb"))
			push_op(stack_a, stack_b);
		else if (ft_strequ(*line, "ra"))
			rotate(stack_a);
		else if (ft_strequ(*line, "rb"))
			rotate(stack_b);
		else if (ft_strequ(*line, "rr"))
			rotate_both(stack_a, stack_b);
		else if (ft_strequ(*line, "rra"))
			reverse_rotate(stack_a);
		else if (ft_strequ(*line, "rrb"))
			reverse_rotate(stack_b);
		else if (ft_strequ(*line, "rrr"))
			reverse_rotate_both(stack_a, stack_b);	
		else 
			invalid_command(stack_a, stack_b);
		
		print_stack(*stack_a);
		ft_putstr("---\n");
		print_stack(*stack_b);
}

void	run_check(t_stack** stack_a, t_stack** stack_b)
{
	if (check_stack(stack_a, stack_b))
		ft_putstr("\033[1;32mOK\n\033[0m");
	else if (!(check_stack(stack_a, stack_b)))
		ft_putstr("\033[0;31mKO\n\033[0m");
}

int		check_three(t_stack** stack_a)
{
	t_stack*	temp;

	temp = *stack_a;
	while (temp->next != NULL)
	{
		if (temp->next->data > temp->data)
			temp = temp->next;
		else
		{
			return(0);
		}
	}
	return(1);
}