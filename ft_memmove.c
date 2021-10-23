/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:42:01 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/12 18:50:45 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char	*destbuf;
	char	*srcbuf;

	if (!dest && !src)
		return (NULL);
	destbuf = dest;
	if (dest < src)
	{
		while (length-- > 0)
			*(char *)(destbuf++) = *(char *)(src++);
	}
	else
	{
		destbuf = dest + length;
		srcbuf = (void *)src + length;
		while (length-- > 0)
			*(char *)(--destbuf) = *(char *)(--srcbuf);
	}
	return (dest);
}
