/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:25:56 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/06/16 17:30:31 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		cp;
	int		cpp;

	cp = 0;
	cpp = 1;
	ft_strlowcase(str);
	while (str[cp] != '\0')
	{
		if (str[cp] >= 'a' && str[cp] <= 'z')
		{
			if (cpp == 1)
				str[cp] -= 32;
			cpp = 0;
		}
		else if (str[cp] >= '0' && str[cp] <= '9')
			cpp = 0;
		else
			cpp = 1;
		cp++;
	}
	return (str);
}
