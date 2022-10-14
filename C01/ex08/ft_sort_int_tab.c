/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:36:34 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/06/14 16:54:34 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	e;
	int	temp;
	int	g ;

	g = 0;
	while (g != size)
	{
		e = 0;
		while (e != size - 1)
		{
			if (tab[e] > tab[e + 1])
			{
				temp = tab[e];
				tab[e] = tab[e + 1];
				tab[e + 1] = temp;
			}
			e++;
		}
		g++;
	}
}
