/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micampos <micampos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 13:29:45 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/07/06 15:58:22 by micampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int	*array;

	b = malloc(sizeof(t_stack));
	if (!b)
    	return (-1);
	b -> head = NULL;
	b -> size = 0;
	if (argc < 2)
		return (ft_printf("You failed!"), 0);
	a = makelst(argc, argv);
	array = array_copy(a);
	array = sort_array(array, a);
	rank(array, a);
	// b = simple(a, b);
	// print_stacks(a, b);
	return (0);
}