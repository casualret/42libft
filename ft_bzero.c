/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:25:36 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 16:04:19 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_bzero(void *src, size_t length)
{
	char	*buf;

	buf = src;
	while (length-- > 0)
	{
		*buf++ = 0;
	}
}