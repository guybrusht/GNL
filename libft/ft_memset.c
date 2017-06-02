/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 15:48:20 by pmorrain          #+#    #+#             */
/*   Updated: 2017/04/16 16:25:16 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char*)s;
	while (i < n)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
