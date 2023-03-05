/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:09:58 by zkantara          #+#    #+#             */
/*   Updated: 2022/12/28 15:54:38 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ami;

	i = 0;
	ami = (char *)s;
	while (ami[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ami[i] == (char)c)
			return (&ami[i]);
		i--;
	}
	return (0);
}
