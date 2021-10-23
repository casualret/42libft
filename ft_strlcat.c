/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:50:53 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 19:36:32 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	destsize;
	size_t	srcsize;

	i = 0;
	k = ft_strlen(dest);
	destsize = k;
	srcsize = ft_strlen(src);
	if ((destsize < size - 1) && (size > 0))
	{
		while (src[i] != '\0' && destsize + i < size - 1)
			dest[k++] = src[i++];
		dest[k] = 0;
	}
	if (destsize >= size)
		destsize = size;
	return (destsize + srcsize);
}
