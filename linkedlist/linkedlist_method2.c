/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist_method2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 15:00:21 by mel-omar          #+#    #+#             */
/*   Updated: 2020/02/09 15:01:40 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void	*free_node(t_list **list)
{
	void	*data;

	data = (*list)->data;
	free(*list);
	return (data);
}
