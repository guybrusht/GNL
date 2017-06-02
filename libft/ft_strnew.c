/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 12:26:00 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/03 13:22:21 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;

	if ((ptr = (char*)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	ft_bzero(ptr, size + 1);
	return (ptr);
}
