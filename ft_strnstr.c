/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:21:54 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 19:53:13 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (little[0] == 0)
		return ((char *)(big));
	while (big[i] != '\0' && i < length)
	{
		k = 0;
		while (big[i + k] != '\0' && little[k] != '\0'
			&& i + k < length && big[i + k] == little[k])
			k++;
		if (little[k] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
