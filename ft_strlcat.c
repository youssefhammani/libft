/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:52:51 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/12 22:52:59 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned char	j;
	unsigned char	n;

	i = 0;
	j = 0;
	n = 0;
	while (dst[j])
		j++;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	else if (j >= dstsize)
		return (dstsize + i);
	while (n < dstsize - j - 1 && src[n])
	{
		dst[j + n] = src[n];
		n++;
	}
	dst[j + n] = '\0';
	return (j + i);
}
