/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:48:41 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/16 04:27:17 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*s_src;
	unsigned char		*d_dst;

	i = 0;
	s_src = (const unsigned char *)src;
	d_dst = (unsigned char *)dst;
	if (s_src == 0 && d_dst == 0)
		return (0);
	if (d_dst > s_src)
		while (len-- > 0)
			d_dst[len] = s_src[len];
	else
	{
		while (i < len)
		{
			d_dst[i] = s_src[i];
			i++;
		}
	}
	return (d_dst);
}
