/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fucntions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kheynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 21:16:40 by kheynes           #+#    #+#             */
/*   Updated: 2020/05/07 21:16:40 by kheynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack*    newNode(int data)
{
    t_stack*    stackNode;

    stackNode = (t_stack*)malloc(sizeof(t_stack));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

void        push(t_stack** root, int data)
{
    t_stack*    stackNode;

    stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
}

int         pop(t_stack** root)
{
    t_stack*    temp;
    int         popped;

    temp = *root;
    *root = (*root)->next;
    popped = temp->data;
    free(temp);

    return popped;
}

int		size(t_stack **root)
{
	int			i;
	t_stack*	temp;

	i = 0;
	temp = *root;
	
	while(temp)
	{
		i++;
		temp = temp->next;
	}
	return(i);
}

void        free_stack(t_stack** stack)
{
    while(size(stack) > 0)
    {
        pop(stack);
    }
}