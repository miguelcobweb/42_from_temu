/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:42:47 by micampos          #+#    #+#             */
/*   Updated: 2026/07/06 15:56:24 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void	rank(int *sorting_array, t_stack *a)
{
	int		n;
	int		i;
	int		j;
	t_node	*temp;

	temp = a -> head;
	n = a -> size;
	j = 0;
	while (j < a -> size)
	{
		i = 0;
		while (sorting_array[i] != temp -> data)
			i++;
		temp -> index = i;
		temp = temp -> next;
		j++;
	}
	i = 0;
	while (i < a -> size)
	{
		printf("%d ", a -> head -> index);
		a -> head = a -> head -> next;
		i++;
	}
}