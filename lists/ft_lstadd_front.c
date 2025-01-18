/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:47:15 by marcsilv          #+#    #+#             */
/*   Updated: 2025/01/18 06:41:02 by marcsilv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstadd_front(t_list **alst, t_list *newnode)
{
	if (!alst || !newnode)
		return ;
	newnode->next = *alst;
	*alst = newnode;
}
