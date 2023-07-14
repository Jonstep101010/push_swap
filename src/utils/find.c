/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:05:47 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/14 20:06:18 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** @brief return lowest index in stack
*/
int	find_lowest(t_stack *stack)
{
	t_node	*current;
	size_t	i;
	int		lowest;

	lowest = 0;
	i = 1;
	stack->size = elementcount(stack);
	current = stack->head;
	while (i <= stack->size)
	{
		if (lowest == 0)
			lowest = current->index;
		else if (current->index < lowest)
			lowest = current->index;
		current = current->next;
		i++;
	}
	return (lowest);
}

/*
** @brief return lowest index in stack
*/
int	find_highest(t_stack *stack)
{
	size_t	i;
	t_node	*current;
	int		highest;

	stack->size = elementcount(stack);
	if (stack->size == 1)
		return ((int)stack->head->index);
	highest = 0;
	i = stack->size;
	current = stack->head;
	while (i > 1)
	{
		if (highest == 0)
			highest = current->index;
		else if (current->index > highest)
			highest = current->index;
		current = current->next;
		i--;
	}
	return (highest);
}