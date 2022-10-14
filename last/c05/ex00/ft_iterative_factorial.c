/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:06:25 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/06/20 21:15:55 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 0;
	f = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i != nb)
		f = f * ++i;
	return (f);
}
