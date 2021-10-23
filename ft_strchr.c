/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:18:37 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 16:36:47 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	char	*buf;
	int		i;

	buf = (char *)src;
	i = 0;
	while (*(buf + i) != '\0')
	{
		if (*(buf + i) == c)
			return (buf + i);
		i++;
	}
	if (*(buf + i) == c)
		return (buf + i);
	return (0);
}
