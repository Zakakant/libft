/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:56:04 by zkantara          #+#    #+#             */
/*   Updated: 2022/12/31 14:51:44 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tst;

	i = 0;
	tst = (char *)s;
	while (tst[i] != (char)c)
	{
		if (tst[i] == '\0')
			return (0);
		i++;
	}
	return (&tst[i]);
}
