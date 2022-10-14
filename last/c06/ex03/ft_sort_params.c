/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 13:02:56 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/06/27 13:03:01 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		e;
	char	*temp;
	int		g ;

	g = 0;
	while (g != size)
	{
		e = 1;
		while (e != size)
		{
			if (ft_strcmp(tab[e], tab[e + 1]) > 0)
			{
				temp = tab[e];
				tab[e] = tab[e + 1];
				tab[e + 1] = temp;
			}
			e++;
		}
		e = 1;
		g++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	ft_sort_int_tab(av, ac - 1);
	i = 0;
	j = 1;
	while (j != ac)
	{
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		i = 0;
		j++;
		write(1, "\n", 1);
	}
}
