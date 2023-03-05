/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:52:18 by zkantara          #+#    #+#             */
/*   Updated: 2022/12/28 15:16:10 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	b;

	i = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (dstsize < a + 1)
	{
		return (b + dstsize);
	}
	while (a + i + 1 < dstsize && src[i] != '\0')
	{
		dst[a + i] = src[i];
		i++;
	}
	dst[i + a] = '\0';
	return (a + b);
}
