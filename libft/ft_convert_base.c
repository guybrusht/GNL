/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 12:20:48 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/11 17:20:54 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_revputnbr_base(unsigned int nb, char *base, char *str)
{
	int		nb_base;
	char	*str2;

	str2 = str + 1;
	nb_base = 0;
	while (base[nb_base])
		nb_base++;
	str[0] = base[nb % nb_base];
	if (nb / nb_base > 0)
	{
		ft_revputnbr_base(nb / nb_base, base, str2);
	}
}

static unsigned int	to_base10(char *nbr, char *base_from)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		nb10;

	i = 0;
	nb10 = 0;
	while (i < ft_strlen(nbr))
	{
		j = 0;
		while (nbr[i] != base_from[j])
			j++;
		nb10 *= ft_strlen(base_from);
		nb10 += j;
		i++;
	}
	return (nb10);
}

char				*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int		i;
	unsigned int		nb_char_res;
	unsigned int		nb10;
	char				*str;

	i = 0;
	nb_char_res = 1;
	if (*nbr == '-')
		nbr++;
	nb10 = to_base10(nbr, base_from);
	i = nb10;
	while (i / ft_strlen(base_to) > 0)
	{
		i = i / ft_strlen(base_to);
		nb_char_res++;
	}
	if ((str = (char*)malloc((nb_char_res + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_revputnbr_base(nb10, base_to, str);
	str[nb_char_res] = '\0';
	str = ft_strrev(str);
	return (str);
}
