/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:35:36 by arutsevi          #+#    #+#             */
/*   Updated: 2023/07/07 19:36:08 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoc(char *s, int nb, int size)
{
	int	rm;

	if (nb < 0)
	{
		rm = -(nb % 10);
		nb = -(nb / 10);
		*s = '-';
		s++;
		size--;
	}
	else
	{
		rm = nb % 10;
		nb = nb / 10;
	}
	*(s + size) = '0' + rm;
	if (size > 0)
		ft_itoc(s, nb, size - 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		nb;
	int		size;

	res = NULL;
	size = 0;
	nb = n;
	while (nb != 0)
	{
		size++;
		nb = nb / 10;
	}
	if (n <= 0)
		size++;
	res = (char *)malloc(size + 1);
	if (res == NULL)
		return (res);
	ft_itoc(res, n, size - 1);
	*(res + size) = '\0';
	return (res);
}
