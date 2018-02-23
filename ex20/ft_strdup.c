/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:44:24 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/07 15:44:25 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*duplic;
	int		i;

	duplic = (char *)malloc(sizeof(duplic) * ft_strlen(src) + 1);
	if (!duplic)
		return (NULL);
	i = 0;
	while (src[i])
	{
		duplic[i] = src[i];
		i++;
	}
	duplic[i] = '\0';
	return (duplic);
}
