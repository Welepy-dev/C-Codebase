/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welepy <welepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:39:42 by welepy            #+#    #+#             */
/*   Updated: 2025/01/18 12:21:41 by welepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	new_ptr = malloc(size);
	if (!new_ptr)
	{
		write(2, "Error: malloc failed\n", 21);
		exit(EXIT_FAILURE);
	}
	ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}
