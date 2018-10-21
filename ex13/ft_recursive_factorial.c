/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:24:05 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/03 16:24:07 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;
	int fact;

	i = 0;
	fact = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > i)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		i++;
		return (nb);
	}
	return (fact);
}
