/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:24:21 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/03 16:24:23 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int racine;

	if (nb < 0)
	{
		return (0);
	}
	racine = 1;
	while (racine * racine < nb)
	{
		racine++;
	}
	if (racine * racine == nb)
	{
		return (racine);
	}
	return (0);
}
