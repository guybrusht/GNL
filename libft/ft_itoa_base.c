/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:29:23 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/11 17:18:38 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa_base(int value, int base)
{
	char	*res;
	char	base10[11];
	char	base16[17];

	ft_strcpy(base10, "0123456789");
	ft_strcpy(base16, "0123456789ABCDEF");
	base16[base] = '\0';
	if (base == 10)
		res = ft_itoa(value);
	else
		res = ft_convert_base(ft_itoa(value), base10, base16);
	return (res);
}
