/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:28:08 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/02/09 20:46:30 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/stack.h"

int	stack_sorted(t_stk *a)
{
	int	i;
	int	j;
	int	triger;

	triger = 1;
	while (a->next)
	{
		i = a->rank;
		j = a->next->rank;
		if (i > j)
			return (0);
		a = a->next;
	}
	return (1);
}