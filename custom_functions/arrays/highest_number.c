/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   highest_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:37:41 by marcsilv          #+#    #+#             */
/*   Updated: 2025/01/18 12:38:00 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	highest_number(int *tab, int size)
{
	int	highest;
	int	i;

	i = 0;
	highest = tab[i];
	while (i < size)
	{
		if (tab[i] > highest)
			highest = tab[i];
		i++;
	}
	return (highest);
}
