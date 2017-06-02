/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:29:09 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/11 17:08:28 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_itoa_rec(int nbr, char *str)
{
	str[0] = nbr % 10 + 0x30;
	str[1] = '\0';
	if (nbr / 10 != 0)
		ft_itoa_rec(nbr / 10, str + 1);
}

static int		ft_numlen10(int nb)
{
	int		length;

	length = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		length++;
	while (nb % 10)
	{
		length++;
		nb = nb / 10;
	}
	return (length);
}

char			*ft_itoa(int n)
{
	int		nb;
	char	*str;

	nb = n;
	if ((str = (char*)malloc((ft_numlen10(n) + 1) * sizeof(char))) == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		str++;
		nb = -n;
	}
	if (n == -2147483648)
		nb = 2147483647;
	ft_itoa_rec(nb, str);
	ft_strrev(str);
	if (n < 0)
	{
		str--;
		if (n == -2147483648)
			str[10] = '8';
	}
	return (str);
}
