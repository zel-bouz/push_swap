/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:04:24 by zel-bouz          #+#    #+#             */
/*   Updated: 2022/11/22 19:31:04 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char    *ft_strcpy(char *dst, const char *src)
{
	int i;

	i = -1;
	while(src[++i])
			dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
