/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlavanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:27:22 by mlavanan          #+#    #+#             */
/*   Updated: 2016/11/25 09:30:58 by mlavanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
		fd = open(av[1], O_RDONLY);
	if (fd >= 0)
	{
		while ((ret = read(fd, buff, BUFF_SIZE)) && ret != -1)
		{
			buff[ret] = '\0';
			ft_putstr(buff);
		}
	}
	else
		return (0);
}
