/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 15:43:32 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/11 16:18:24 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*copy;

	if ((copy = ft_lstnew(lst->content, lst->content_size)) == NULL)
		return (NULL);
	copy = f(copy);
	if (lst->next != NULL)
		copy->next = ft_lstmap(lst->next, f);
	return (copy);
}
