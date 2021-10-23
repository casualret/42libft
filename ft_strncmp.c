/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:46:04 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 17:41:18 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *src1, const char *src2, size_t length)
{
	size_t	i;
	size_t	buflength;

	i = 0;
	buflength = length;
	while (length-- > 0 && src1[i] != '\0' && src2[i] != '\0')
	{
		if (src1[i] != src2[i])
			return ((unsigned char)src1[i] - (unsigned char)src2[i]);
		i++;
	}
	if (i < buflength)
		return ((unsigned char)src1[i] - (unsigned char)src2[i]);
	return (0);
}
