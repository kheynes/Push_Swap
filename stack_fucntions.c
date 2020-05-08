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
#include <stdio.h>

t_stack*    newNode(int data)
{
    t_stack* stackNode = NULL;

    stackNode = (t_stack*)malloc(sizeof(t_stack));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int         isEmpty(t_stack* root)
{
    return !root;
}

void        push(t_stack** root, int data)
{
    t_stack* stackNode = NULL;

    stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
}

int         pop(t_stack** root)
{
    t_stack* temp = NULL;
    int popped = 0;

    temp = *root;
    *root = (*root)->next;
    popped = temp->data;
    free(temp);

    return popped;
}

void        print_stack(t_stack* root)
{
    t_stack* currentNode = root;
    while (currentNode != NULL)
    {
        printf("%d", currentNode->data);
        currentNode = currentNode->next;
    }
}