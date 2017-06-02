/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:19:25 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/31 21:14:14 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int				i;
	char			*backn;
	int				ret;
	char			buf[BUFF_SIZE + 1];
	static char		remaining[BUFF_SIZE + 1] = { '\0' };

	if ((*line = (char*)malloc(sizeof(char))) == NULL)
	{
		ft_putendl("Malloc error.");
		return (0);
	}
	i = 0;
	(*line)[0] = '\0';
	buf[0] = '\0';

// VERIFIER CONTENU DE REMAINING POUR VOIR s'IL Y A D'AUTRES \n
	if ((backn = ft_strchr(remaining, '\n')) != NULL)
	{
		*line = ft_strsub(remaining, 0, (int)(backn - remaining));
		ft_memmove(remaining, backn, (int)(backn - remaining));
		remaining[(int)(backn - remaining)] = '\0';
		return (1);
	}
	ft_putendl("");
	*line = ft_strjoin(*line, remaining);
	ft_putstr("--- JOIN : ");
	ft_putendl(*line);
	//	ft_putendl("preloops");
	while ((backn = ft_strchr(buf, '\n')) == NULL)
	{
		//ft_putendl("preloop");
		ret = read(fd, buf, BUFF_SIZE);
		buf[BUFF_SIZE] = '\0';
		if (ret == 0 || ret == -1)
			return (ret);
//		ft_putendl(buf);
		//*line = ft_strjoin(*line, remaining);
		*line = ft_strjoin(*line, buf);
		//ft_putendl("loop");
		ft_putstr("--- JOIN : ");
		ft_putendl(*line);
		i++;
	}
	(*line)[(i - 1) * BUFF_SIZE + (int)(backn - buf)] = '\0';
//	ft_putendl("loops");
	ft_strncpy(remaining, backn + 1, BUFF_SIZE - (int)(backn - buf));
	remaining[BUFF_SIZE - (int)(backn - buf)] = '\0';
//	ft_putstr("### REM  :  ");
//	ft_putendl(remaining);
	return (1);
}



// VERIFIER CETTE FONCTION
int		ft_check_eof(char *str)
{
	int		i;

	i = 0;

	while (str[i] && i < BUFF_SIZE)
		i++;
	if (i == BUFF_SIZE)
		return (0);
	else
		return (i);

}
