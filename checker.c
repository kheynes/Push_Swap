/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:24:31 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/08 16:24:31 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        exit(1);
    }

    char        **str;
    int         i;
    t_stack*    stack_a;

    str = ft_strsplit(av[1], ' ');
    i = 0;
    stack_a = NULL;

    while (str[i])
    {
        push(&stack_a, ft_atoi(str[i]));
        i++;
    }
    print_stack(stack_a);

    return 0;
}