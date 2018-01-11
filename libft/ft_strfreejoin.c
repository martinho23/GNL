/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfreejoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:25:03 by jfarinha          #+#    #+#             */
/*   Updated: 2018/01/11 10:38:00 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfreejoin(char *s1, const char *s2)
{
	int		i;
	char	*tmp;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(tmp = (char *)malloc(sizeof(*tmp) * \
				(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (*s1)
		tmp[i++] = *(s1++);
	while (*s2)
		tmp[i++] = *(s2++);
	tmp[i] = '\0';
	ft_strdel(&s1);
	return (tmp);
}
