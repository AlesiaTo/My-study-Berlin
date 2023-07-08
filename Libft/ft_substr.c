/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:32:48 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 19:33:18 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (len >= ft_strlen(s) && start < ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	sub = (char *)malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start + i] != '\0' && i < len)
		{
			sub[i] = (char)s[start + i];
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
