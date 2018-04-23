/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:46:59 by mabril            #+#    #+#             */
/*   Updated: 2018/04/17 16:47:00 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != c && *s)
		i++;
	if (s[i] == '\0')
		return (NULL);
	return (&s[i]);
}
