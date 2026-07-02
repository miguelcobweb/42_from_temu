/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 15:36:19 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/07/02 16:01:04 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../push_swap.h"

t_stack *simple(t_stack *a, t_stack *b)
{
	int	count;

	count = 0;
	printf("ratio: %f\n", disorder(a));
	while (a -> size > 1)
	{
		if (a -> head -> data < a -> head -> next -> data)
		{
			push_b(a, b);
			count++;
		}
		else
		{
			swap_a(a);
			push_b(a, b);
			count += 2;
		}
	}
	while (b -> size > 0)
	{
		if (b -> head -> data > b -> head -> next -> data)
		{
			push_a(a, b);
			count++;
		}
		else
		{
			swap_b(b);
			push_a(a, b);
			count += 2;
		}
	}
	printf("counter: %d\n", count);
	return (b);
}
