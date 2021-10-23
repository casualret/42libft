/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:46:03 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/17 16:52:48 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*src;
	int		i;

	if (s)
	{
		src = ft_strdup(s);
		if (src)
		{
			i = 0;
			while (src[i])
			{
				src[i] = (*f)(i, src[i]);
				i++;
			}
			return (src);
		}	
	}
	return (0);
}
