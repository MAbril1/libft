/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:16:59 by mabril            #+#    #+#             */
/*   Updated: 2018/04/17 15:17:01 by mabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if (*s1 == '\0' && *s1 == *s2)
		return (0);
	else if (*s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	else
		return (*s1 - *s2);
}