/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:06:40 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/02/08 18:44:38 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_is_space(char c)
{
	return (c == '\f' || c == '\t' || c == ' '
		|| c == '\n' || c == '\r' || c == '\v');
}

long	ft_atoi_long(const char *str)
{
	int		sign;
	long	res;

	res = 0;
	sign = 1;
	while (ft_is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		else if (*str == '+')
			sign = 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		res *= 10;
		res += (*str) - 48;
		str++;
	}
	res = res * sign;
	return (res);
}
