/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:22:38 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 13:11:23 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	int		j;
	int		f;

	n = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[j] && n < len)
	{
		f = 0;
		while (n + f < len && little[f] == big[j + f])
		{
			if (little[f + 1] == '\0')
				return ((char *)big + j);
			f++;
		}
		n++;
		j++; 
	}
	return (NULL);
}
