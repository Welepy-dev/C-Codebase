/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:34:48 by marcsilv          #+#    #+#             */
/*   Updated: 2025/01/18 12:35:50 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	lowest_number(int *tab, int size)
{
	int	lowest;

	lowest = tab[0];
	while (size--)
	{
		if (tab[size] < lowest)
			lowest = tab[size];
	}
	return (lowest);
}
