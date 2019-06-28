/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 09:34:52 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/15 21:42:10 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;
	int	first;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		first = a;
		while ((str[a] >= 'a' && str[a] <= 'z') ||
				(str[a] >= 'A' && str[a] <= 'Z') ||
				(str[a] >= '0' && str[a] <= '9'))
		{
			if (b == 0 && str[b + first] > 'a' && str[b + first] < 'z')
				str[b + first] = str[b + first] - 32;
			else if (str[b + first] > 'A' && str[b + first] < 'Z')
				str[b + first] = str[b + first] + 32;
			b++;
			a++;
		}
		b = 0;
		a++;
	}
	return (str);
}
