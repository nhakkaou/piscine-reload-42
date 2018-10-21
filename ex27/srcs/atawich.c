/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atawich.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 19:15:47 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/03 21:15:20 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}