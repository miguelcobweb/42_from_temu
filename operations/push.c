/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:38:36 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/07/09 16:01:13 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_push(t_stack *src, t_stack *dst)
{
	t_node	*node;
	t_node	*new_head;
	t_node	*last;
	int temp;

	if(src->size == 0)
		return;
	node = src->head;
	temp = node -> index;
	/*Caso que tenha so 1 elemento na stack*/
	 if (src->size == 1)
    {
        src->head = NULL;
        src->size--;
        lstaddfront(&dst->head, node->data, temp);
        dst->size++;
        free(node);
        return ;
    }
	new_head = node->next;
	last = node ->prev;	
	src->head = new_head;
	new_head-> prev = last;
	last->next = new_head;
	src->size--;
	lstaddfront(&(dst->head), node->data, temp);
	dst->size++;
    free(node);
}
void	push_a(t_stack *a, t_stack *b)
{
	do_push(b, a);
    ft_printf("pa\n");
}

void	push_b(t_stack *a, t_stack *b)
{
	do_push(a, b);
    ft_printf("pb\n");
}
