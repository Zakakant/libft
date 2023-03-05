/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:29:29 by zkantara          #+#    #+#             */
/*   Updated: 2022/12/28 14:46:11 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	zaz_size;
	void	*ziko;

	zaz_size = count * size;
	if (size != 0 && zaz_size / size != count)
		return (NULL);
	ziko = malloc(zaz_size);
	if (ziko == NULL)
		return (NULL);
	ft_memset(ziko, 0, zaz_size);
	return (ziko);
}
