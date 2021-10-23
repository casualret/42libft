/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:01:10 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/12 16:12:18 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*buf;

	if (s1 != 0 && set != 0)
	{
		while (*s1 != 0 && ft_strchr(set, *s1))
			s1++;
		size = ft_strlen(s1);
		while (size != 0 && ft_strchr(set, s1[size]))
			size--;
		buf = ft_substr((char *)s1, 0, size + 1);
		return (buf);
	}
	return (0);
}
