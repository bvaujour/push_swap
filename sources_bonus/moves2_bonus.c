/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:57:07 by bvaujour          #+#    #+#             */
/*   Updated: 2023/02/07 14:57:09 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"
#include "../get_next_line.h"

void	ra(t_stack *t)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = t->a[0];
	while (i < t->size_a - 1)
	{
		t->a[i] = t->a[i + 1];
		i++;
	}
	t->a[t->size_a - 1] = tmp;
}

void	rb(t_stack *t)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = t->b[0];
	while (i < t->size_b - 1)
	{
		t->b[i] = t->b[i + 1];
		i++;
	}
	t->b[t->size_b - 1] = tmp;
}

void	rr(t_stack *t)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = t->a[0];
	while (i < t->size_a - 1)
	{
		t->a[i] = t->a[i + 1];
		i++;
	}
	t->a[t->size_a - 1] = tmp;
	i = 0;
	tmp = t->b[0];
	while (i < t->size_b - 1)
	{
		t->b[i] = t->b[i + 1];
		i++;
	}
	t->b[t->size_b - 1] = tmp;
}

void	rra(t_stack *t)
{
	int	tmp;
	int	size;

	size = t->size_a;
	tmp = t->a[size - 1];
	while (size > 1)
	{
		t->a[size - 1] = t->a[size - 2];
		size--;
	}
	t->a[0] = tmp;
}

void	rrb(t_stack *t)
{
	int	tmp;
	int	size;

	size = t->size_b;
	tmp = t->b[size - 1];
	while (size > 1)
	{
		t->b[size - 1] = t->b[size - 2];
		size--;
	}
	t->b[0] = tmp;
}
