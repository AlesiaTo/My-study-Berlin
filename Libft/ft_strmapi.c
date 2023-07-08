/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:37:25 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 19:37:43 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	size_t			len;

	len = ft_strlen(s);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (res);
	i = 0;
	while (i < len)
	{
		res[i] = (*f)(i, (char)s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
