/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:36:04 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 19:26:40 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char const *str, char end)
{
	char	*res;
	size_t	len;
	size_t	i;

	i = 0;
	while ((char)str[i] != end && (char)str[i] != '\0')
		i++;
	len = i;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (res);
	i = 0;
	while (i < len)
	{
		res[i] = (char)str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static unsigned int	ft_count_words(char const *str, char c)
{
	unsigned int	nb;
	char			*s;

	s = (char *)str;
	nb = 0;
	while (*s != '\0')
	{
		if (*s != c)
			nb++;
		while (*s != c && *s != '\0')
			s++;
		while (*s == c && *s != '\0')
			s++;
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	unsigned int	i;
	unsigned int	n;

	n = ft_count_words(s, c);
	res = (char **)malloc((n + 1) * sizeof(char *));
	if (res == NULL)
		return (res);
	i = 0;
	while (i < n)
	{
		while ((char)*s == c && *s != '\0')
			s++;
		if ((char)*s != c)
		{
			res[i] = ft_strcpy(s, c);
			if (res[i] == NULL)
				return (res);
		}
		while ((char)*s != c && *s != '\0')
			s++;
		i++;
	}
	res[i] = NULL;
	return (res);
}
