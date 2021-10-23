/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:49:59 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 16:35:43 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	char	*destbuf;

	if (!dest && !src)
		return (0);
	destbuf = dest;
	while (length-- > 0)
		*(destbuf++) = *(char *)(src++);
	return (dest);
}
