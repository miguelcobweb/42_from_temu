/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:50:46 by micampos          #+#    #+#             */
/*   Updated: 2026/07/06 15:58:40 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	*sort_array(int *sorting_array, t_stack *a)
{
	int	n;
	int	i;
	int	j;
	int	temp;

	n = a -> size;
	j = 0;
	while (j < n)
	{
		i = 0;
		while (i < n - 1)
		{
			if (sorting_array[i] > sorting_array[i + 1])
			{
				temp = sorting_array[i];
				sorting_array[i] = sorting_array[i + 1];
				sorting_array[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	return (sorting_array);
}
