/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:01:26 by zkantara          #+#    #+#             */
/*   Updated: 2022/12/30 14:41:30 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*gg;
	size_t	i;
	size_t	len;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	gg = (char *)malloc(sizeof(char) * len + 1);
	if (gg == NULL)
		return (NULL);
	while (i < len)
	{
		gg[i] = f(i, s[i]);
		i++;
	}
	gg[i] = '\0';
	return (gg);
}
