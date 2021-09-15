/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 03:12:23 by ltouret           #+#    #+#             */
/*   Updated: 2021/09/15 03:17:09 by ltouret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc(size_t size)
{
	void	*out;

	out = malloc(size);
	if (out == NULL)
		return (NULL);
		//panic(ERR_MALLOC);
	ft_bzero(out, size);
	return (out);
}
