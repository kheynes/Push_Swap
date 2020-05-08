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

int main(int ac, char **av)
{
    if (ac != 2)
    {
        write(1, "\n", 1);
        exit(1);
    }


    ar[] = ft_strsplit(av[1], ' ');
    int i = 0;
    t_stack* stack_a = NULL;
    while(ar)
    {
        push(&stack_a, ar[i]);
        i++;
    }

    print_stack(stack_a);
    write(1, "\n", 1);

    return 0;
}