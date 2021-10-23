/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:09:47 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/12 15:11:57 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t length)
{
	char	*dest;

	if (src != 0)
	{
		if ((unsigned int)ft_strlen(src) <= start)
			return (ft_strdup("\0"));
		dest = (char *)malloc(sizeof(char) * length + 1);
		if (dest != 0)
		{
			ft_strlcpy(dest, src + start, length + 1);
			return (dest);
		}
	}
	return (0);
}
