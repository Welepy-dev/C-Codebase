/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: welepy <welepy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:27:00 by marcsilv          #+#    #+#             */
/*   Updated: 2025/01/18 12:21:41 by welepy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_string_split(char *str, char c)
{
	char	*split;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	split = safe_malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && str[i] != c)
	{
		split[i] = str[i];
		i++;
	}
	split[i] = '\0';
	return (split);
}
