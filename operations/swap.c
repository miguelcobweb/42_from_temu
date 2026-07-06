/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:40:10 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/06/21 17:28:20 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    do_swap(t_stack *s)
{
    int t;

    if (s->size < 2)
        return ;
    t = s->head->data;
    s->head->data = s->head->next->data;
    s->head->next->data = t;
}

void    swap_a(t_stack *a)
{
    do_swap(a);
    ft_printf("sa\n");
}

void    swap_b(t_stack *b)
{
    do_swap(b);
    ft_printf("sb\n");
}

void    swap_ss(t_stack *a, t_stack *b)
{
    do_swap(a);
    do_swap(b);
    ft_printf("ss\n");
}