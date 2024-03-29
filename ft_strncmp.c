/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 08:04:23 by ltouret           #+#    #+#             */
/*   Updated: 2021/09/04 23:57:12 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int		i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (s2[i] == '\0' || i == n)
		return (0);
	else
		return (-s2[i]);
}
/*
**#include <stdio.h>
**#include <string.h>
**
**int		main(void)
**{
**	printf("ft_strncmp : %d\n", ft_strncmp("test\200", "test\0", 6));
**	printf("strncmp : %d\n", strncmp("test\200", "test\0", 6));
**}
*/
