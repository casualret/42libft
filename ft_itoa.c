/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:09:14 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/17 17:59:38 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_itoa(int n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
		size++;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*ft_itoa_fill(int n, int size, int i, char *dest)
{
	while (size-- > i)
	{
		if (n < 0)
		{
			dest[size] = n % 10 * (-1) + '0';
			n = n / 10;
		}
		else
		{
			dest[size] = n % 10 + '0';
			n = n / 10;
		}
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	int		size;

	size = ft_size_itoa(n);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest)
	{
		i = 0;
		dest[size] = '\0';
		if (n < 0)
		{
			dest[0] = '-';
			i = 1;
		}
		return (ft_itoa_fill(n, size, i, dest));
	}
	return (0);
}
