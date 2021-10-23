/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:48:35 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/10 18:26:24 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int ch, size_t length)
{
	unsigned char	*buf;

	buf = src;
	while (length-- > 0)
		*buf++ = (unsigned char) ch;
	return (src);
}
