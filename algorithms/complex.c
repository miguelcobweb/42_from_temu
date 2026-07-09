/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 13:37:35 by micampos          #+#    #+#             */
/*   Updated: 2026/07/09 16:35:04 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	complex(t_stack *a, t_stack *b)
{
	int	n;
	int	i;
	int	t;
	int	order;
	int count;
	
	order = 0;
	count = 0;
	n = a -> size - 1;
	while (n >>= 1)
		order++;
	// printf("\norder: %d\n", order);
	n = 0;
	while(n <= order)
	{
		i = 0;
		t = a -> size;
		while(i < t)
		{
			if ((a -> head -> index >> n) & 1)
			{
				rotate_a(a);
				count++;
			}
			else
			{
				push_b(a, b);
				count++;
			}
			i++;
		}
		// printf("\nsize of a: %d\n", a -> size);
		// printf("\nsize of b: %d\n", b -> size);
		while (b -> size > 0)
		{
			push_a(a, b);
			count++;
		}
		// printf("\nsize of b: %d\n", b -> size);
		n++;
	}
	return(count);
}
