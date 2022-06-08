/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:47:57 by yhammani          #+#    #+#             */
/*   Updated: 2021/11/10 16:48:09 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s_src;
	unsigned char		*d_dst;

	i = 0;
	s_src = (const unsigned char *)src;
	d_dst = (unsigned char *)dst;
	if (s_src == 0 && d_dst == 0)
		return (0);
	while (i < n)
	{
		d_dst[i] = s_src[i];
		i++;
	}
	return (d_dst);
}
