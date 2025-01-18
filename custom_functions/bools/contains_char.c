/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contains_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welepy <welepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:52:18 by marcsilv          #+#    #+#             */
/*   Updated: 2025/01/18 13:23:26 by welepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

bool	contains_char(char *str, char *set)
{
	while (*str)
	{
		if (ft_strchr(set, *str))
			return (true);
		str++;
	}
	return (false);
}
