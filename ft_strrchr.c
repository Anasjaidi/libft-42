/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:41:48 by ajaidi            #+#    #+#             */
/*   Updated: 2021/11/05 18:22:11 by ajaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i++;
	while (--i)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	if (s[0] == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
