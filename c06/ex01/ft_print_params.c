/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:22:33 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/06/21 19:57:15 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j != argc)
	{
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		i = 0;
		j++;
		write(1, "\n", 1);
	}
}
