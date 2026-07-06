/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:32:39 by micampos          #+#    #+#             */
/*   Updated: 2026/07/06 15:55:07 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	*array_copy(t_stack *a)
{
	int	n;
	int	i;
	int	*sorting_array;
	t_node *temp;
	
	n = a -> size;
	temp = a -> head;
	sorting_array = malloc(n * sizeof(int));
	if (sorting_array == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		sorting_array[i] = temp -> data;
		temp = temp -> next;
		i++;
	}
	return (sorting_array);
}
