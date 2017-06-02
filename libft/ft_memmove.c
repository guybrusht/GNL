/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 12:21:41 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/05 17:07:42 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int		i;
	char				tmp;
	char				*ptr;
	char				*ptr2;

	ptr = (char*)dst;
	ptr2 = (char*)src;
	if (src == dst)
		return (dst);
	if (src < dst)
	{
		i = len;
		while (i--)
		{
			tmp = ptr2[i];
			ptr[i] = tmp;
		}
	}
	else
		ft_memcpy(ptr, ptr2, len);
	return (dst);
}
