/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 00:01:17 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/17 00:01:17 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	invalid_command(t_stack** stack_a, t_stack** stack_b)
{
	ft_putstr_fd("\033[0;31mError\n\033[0m", 2);
	free_stack(stack_a);
	free_stack(stack_b);
	exit(1);
}

void	is_duplicate(t_stack** stack_a)
{
	t_stack*	temp;

	temp = *stack_a;

	while(temp->next != NULL)
	{
		if (temp->next->data != temp->data)
			temp = temp->next;
		else
		{
			ft_putstr_fd("\033[0;31mError\n\033[0m", 2);
			free_stack(stack_a);
			exit(1);
		}
	}
	return ;
}

void	is_integer(char *str, t_stack** stack_a)
{
	char	*arr;
	char	*temp;
	int		i;

	arr = str;
	i = ft_atoi(arr);
	temp = ft_itoa(i);

	if (ft_strequ(temp, arr))
	{
		free(temp);
		return ;
	}
	else
	{
		ft_putstr_fd("\033[0;31mError\n\033[0m", 2);
		free(temp);
		free_stack(stack_a);
		exit(1);
	}
}