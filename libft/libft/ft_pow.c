/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 10:39:30 by lfabbro           #+#    #+#             */
/*   Updated: 2016/09/28 10:39:31 by lfabbro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long		ft_pow(int nb, int pow)
{
	int		i;
	long	tot;

	i = 1;
	if (pow == 0)
		return (1);
	tot = nb;
	while (i < pow)
	{
		tot *= nb;
		++i;
	}
	return (tot);
}
