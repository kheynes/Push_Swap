/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 10:52:29 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/17 10:52:29 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    run_operation(char *str, t_stack** stack_a, t_stack** stack_b)
{
    perform_op(&str, stack_a, stack_b);
    ft_putendl(str);
}

int     main(int ac, char **av)
{
    t_stack*    stack_a;
    t_stack*    stack_b;

    if (ac < 2)
        return (0);

    stack_a = NULL;
    stack_b = NULL;

    make_stack(&stack_a, &av[1]);
    is_duplicate(&stack_a);
    if (check_stack(&stack_a, &stack_b))
        exit(1);
    if (size(&stack_a) <= 3)
        sort_three(&stack_a, &stack_b);
    if(size(&stack_a) <= 5)
        sort_five(&stack_a, &stack_b);
    
    print_stack(stack_a);

    return(0);
}