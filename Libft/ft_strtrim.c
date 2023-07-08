/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:34:43 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 19:35:13 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(char ch, char const *chars)
{
	while (*chars != '\0')
	{
		if (*chars == ch)
			return (1);
		chars++;
	}
	return (0);
}

static void	ft_strncpy(char *dst, char const *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	len;
	size_t	i;
	size_t	j;

	res = NULL;
	len = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && is_inset(s1[i], set) == 1)
		i++;
	j = len - 1;
	len = len - i;
	while (j > 0 && is_inset(s1[j], set) == 1 && len > 0)
	{
		len--;
		j--;
	}
	res = (char *)malloc(len + 1);
	if (res != NULL)
		ft_strncpy(res, &(s1[i]), len);
	return (res);
}
