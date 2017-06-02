/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 11:49:33 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/03 13:21:58 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if ((ptr = (char*)malloc(size * sizeof(char))) == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
