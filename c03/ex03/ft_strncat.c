/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:53:36 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/06/20 17:49:07 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	i;

	x = 0;
	while (dest[x] != '\0')
		x++;
	i = 0;
	while (src[i] != '\0' && i != nb)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
