/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:26:49 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/03 16:26:52 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int			r;
	char		*ptr;

	r = 0;
	if (src == NULL)
		return (NULL);
	while (src[r] != '\0')
		r++;
	ptr = (char*)malloc(sizeof(*ptr) * (r + 1));
	r = 0;
	while (src[r] != '\0')
	{
		ptr[r] = src[r];
		r++;
	}
	ptr[r] = '\0';
	return (ptr);
}
