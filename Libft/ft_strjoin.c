/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:33:47 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 19:34:07 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		res[len] = s1[i];
		len++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		res[len] = s2[i];
		len++;
		i++;
	}
	res[len] = '\0';
	return (res);
}
