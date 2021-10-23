/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:16:30 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 18:38:57 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t length)
{
	while (length-- > 0)
	{
		if (*(unsigned char *)(b1) != *(unsigned char *)(b2))
			return (*(unsigned char *)(b1) - *(unsigned char *)(b2));
		b1++;
		b2++;
	}
	return (0);
}
