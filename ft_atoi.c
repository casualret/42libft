/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:54:20 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 21:22:28 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	nmb;
	int				minus;
	unsigned int	i;

	i = 0;
	nmb = 0;
	minus = 1;
	while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			minus = -1;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nmb = (nmb * 10) + (nptr[i++] - '0');
	if (nmb > 2147483647)
	{
		if (minus == -1 && nmb != 2147483648)
			return (0);
		if (minus == 1)
			return (-1);
	}
	return ((int)(nmb * minus));
}
