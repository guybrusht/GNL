/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorrain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 16:45:47 by pmorrain          #+#    #+#             */
/*   Updated: 2017/05/30 18:08:38 by pmorrain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft/libft.h"
#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		gnl_ret;
	char	**line;

	if (argc == 2)
	{
		if ((line = (char**)malloc(sizeof(char*))) == NULL)
		{
			ft_putendl("Malloc error.");
			exit(0);
		}
		if ((fd = open(argv[1], O_RDONLY)) == -1)
		{
			ft_putendl("Error opening file.");
				exit(0);
		}
		ft_putstr("File descriptor: ");
		ft_putnbr(fd);
		ft_putchar('\n');
//		ft_putendl("File opened.");
		while ((gnl_ret = get_next_line(fd, line)))
		{
//			ft_putendl("LOOP");
			if (gnl_ret == -1)
			{
				ft_putendl("Error reading file.");
				exit(0);
			}
			ft_putstr("### LINE : ");
			ft_putendl(*line);
		}
		close(fd);
//		ft_putendl("File closed.");
	}
	else
		ft_putendl("Usage: ./gnl [file]");
	return (0);
}
