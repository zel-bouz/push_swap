/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:31:17 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/02/14 06:29:22 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_vars(t_vars *vars)
{
	vars->a = NULL;
	vars->b = NULL;
	vars->a_max = 0;
	vars->b_max = 0;
	vars->a_min = 0;
	vars->b_min = 0;
	vars->a_len = 0;
	vars->b_len = 0;
	vars->b_len = 0;
	vars->pivot = 0;
	vars->shunks_nm = 0;
	vars->fixe_len = 0;
}

void	push_swap(t_stk *a)
{
	t_vars	vars;

	init_vars(&vars);
	vars.a = a;
	init_final_pos(vars.a);
	sort_stack(&vars);
	clear_stk(&vars.a);
}
