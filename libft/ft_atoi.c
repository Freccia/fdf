/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:31:17 by lfabbro           #+#    #+#             */
/*   Updated: 2016/01/15 18:49:47 by lfabbro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

int		ft_atoi(const char *str)
{
	int		n;
	int		sign;

	n = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' ||
			*str == '\f' || *str == '\v')
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - 48) % 10;
		str++;
	}
	return (n * sign);
}
