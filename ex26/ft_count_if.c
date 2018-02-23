/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbailleu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:03:41 by tbailleu          #+#    #+#             */
/*   Updated: 2017/11/07 17:03:42 by tbailleu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int nbr;
	int i;

	i = 0;
	nbr = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
			nbr++;
		i++;
	}
	return (nbr);
}