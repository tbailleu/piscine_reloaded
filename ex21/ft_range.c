/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:55:27 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/07 15:55:35 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int i;

	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(result) * (max - min));
	i = 0;
	while (min < max)
		result[i++] = min++;
	return (result);
}
