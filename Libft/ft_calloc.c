/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:29:23 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 19:30:11 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			len;

	len = nmemb * size;
	if (2147483647 < size * nmemb)
		return (NULL);
	ptr = (unsigned char *)malloc((len));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}
