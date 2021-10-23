/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsiu <thsiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:15:39 by thsiu             #+#    #+#             */
/*   Updated: 2021/10/23 19:26:33 by thsiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_splitcount(const char *src, char c)
{
	int	splitcntr;
	int	i;

	splitcntr = 0;
	i = 0;
	while (src[i])
	{
		if (src[i] != c && (src[i + 1] == c || src[i + 1] == '\0'))
			splitcntr++;
		i++;
	}
	return (splitcntr);
}

static int	ft_splitlength(const char *src, char c)
{
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (src[i] != c && src[i++] != '\0')
		length++;
	return (length);
}

static void	*ft_free(char **src, int splitcntr)
{
	int	i;

	i = 0;
	while (i < splitcntr)
		free(src[i++]);
	free (src);
	return (0);
}

static char	**ft_putsplit(char const *src, char **dest, char c, int spltcntr)
{
	int	i;
	int	splitlen;
	int	k;

	i = -1;
	while (++i < spltcntr)
	{
		while (*src == c)
			src++;
		splitlen = ft_splitlength(src, c);
		dest[i] = (char *)malloc(sizeof(char) * (splitlen + 1));
		if (!dest)
			return (ft_free(dest, i));
		k = 0;
		while (k < splitlen)
		{
			dest[i][k] = *src++;
			k++;
		}
		dest[i][k] = '\0';
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char const *src, char c)
{
	char	**dest;
	int		count;

	if (src)
	{
		count = ft_splitcount(src, c);
		dest = (char **)malloc(sizeof(char *) * (count + 1));
		if (dest)
		{
			dest = ft_putsplit(src, dest, c, count);
			return (dest);
		}
	}
	return (0);
}
