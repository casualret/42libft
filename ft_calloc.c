/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:11:57 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/11 21:21:34 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t mem, size_t size)
{
	void	*buf;

	buf = malloc(mem * size);
	if (buf)
		ft_memset(buf, 0, mem * size);
	return (buf);
}
