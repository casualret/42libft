/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:44:04 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 18:15:04 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t length)
{
	while (length-- > 0)
	{
		if (*(unsigned char *)(b) == (unsigned char)c)
		{
			return ((void *)b);
		}
		b++;
	}
	return (0);
}
