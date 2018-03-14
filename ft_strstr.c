/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkwon <rkwon@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 02:48:59 by rkwon             #+#    #+#             */
/*   Updated: 2018/03/13 22:24:38 by rkwon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int			i;
	int			j;

	i = 0;
	if (!s1)
		return (NULL);
	if (!(s2[i]))
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			if ((s1[i + j + 1] == '\0') || (s2[j + 1] == '\0'))
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
