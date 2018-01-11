/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarinha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:19:20 by jfarinha          #+#    #+#             */
/*   Updated: 2017/11/14 13:00:28 by jfarinha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *p, int c, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)p;
	while (n-- > 0)
	{
		if (*(tmp++) == (unsigned char)c)
			return (void *)(tmp - 1);
	}
	return (NULL);
}
