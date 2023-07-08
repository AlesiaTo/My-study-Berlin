/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 09:04:23 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 16:16:44 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ss;

	ss = s;
	ss = ss + ft_strlen(s);
	while (*ss != (char)c && s != ss)
		ss--;
	if (*ss == (char)c)
		return ((char *)ss);
	else
		return (NULL);
}
