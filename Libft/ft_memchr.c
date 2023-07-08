/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:25:31 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 16:17:27 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	k;
	char	*str;

	k = 0;
	str = (char *)s;
	while (k < n)
	{
		if ((unsigned char)str[k] == (unsigned char)c)
			return ((char *)s + k);
		k++;
	}
	return (NULL);
}
