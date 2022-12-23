/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 01:34:15 by zel-bouz          #+#    #+#             */
/*   Updated: 2022/12/23 19:54:16 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_big(t_stk **a, t_stk **b, int len)
{
	if (len > 5)
	{
		while (*a)
		{
			push_min_pb(a, b);
		}
		while (*b)
		{
			pa_b_op(b, a, "pa\n");
		}
	}
}