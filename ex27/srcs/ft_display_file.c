/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:11:42 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/03 19:11:46 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/biblio.h"

int	main(int argc, char **argv)
{
	char	buffer[10001];
	int		file;
	int		last_one;

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		file = open(argv[1], O_RDONLY);
		last_one = read(file, buffer, 10000);
		buffer[last_one] = '\0';
		close(file);
		ft_putstr(buffer);
	}
	return (0);
}
