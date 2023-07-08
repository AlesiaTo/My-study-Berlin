/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <arutsevi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:53:53 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 14:02:56 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	z;

	i = 0;
	z = 0;
	while (dest[i] && i < size)
		i++;
	while (src[z] && (i + z + 1) < size)
	{
		dest[i + z] = src[z];
		z++;
	}
	if (i < size)
		dest [i + z] = '\0';
	return (i + ft_strlen((char *)src));
}
