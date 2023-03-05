/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:44:20 by zkantara          #+#    #+#             */
/*   Updated: 2022/12/28 14:50:25 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*zaz;
	size_t			i;

	i = 0;
	zaz = (unsigned char *)s;
	while (i < n)
	{
		zaz[i] = '\0';
		i++;
	}
}
