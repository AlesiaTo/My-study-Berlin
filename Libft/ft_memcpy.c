/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:52:30 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 16:23:03 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	k;
	char	*dst;
	char	*sr;

	if (!dest && !src)
		return (0); 
	k = 0;
	dst = (char *)dest;
	sr = (char *)src;
	while (k < n)
	{
		dst[k] = sr[k];
		k++;
	}
	return (dest);
}
