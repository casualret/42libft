/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:40:40 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 16:43:57 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char	*buf;
	int		i;
	char	*bufptr;

	buf = (char *)src;
	bufptr = 0;
	i = 0;
	while (*(buf + i) != '\0')
	{
		if (*(buf + i) == c)
			bufptr = (buf + i);
		i++;
	}
	if (*(buf + i) == c)
		return (buf + i);
	return (bufptr);
}
