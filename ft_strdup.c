/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkantara <zkantara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:29:51 by zkantara          #+#    #+#             */
/*   Updated: 2023/03/04 16:41:18 by zkantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*ss;
	int		size;
	int		i;

	size = 0;
	i = 0;
	ss = (char *)s1;
	while (ss[size] != '\0')
		size++;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		while (i < size)
		{
			str[i] = ss[i];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
