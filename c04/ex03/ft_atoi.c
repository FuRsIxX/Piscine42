/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:39:33 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/26 09:19:43 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	neg;
	int	nbr;

	a = 0;
	neg = 0;
	nbr = 0;
	while ((str[a] == ' ') || (str[a] == '\t') || (str[a] == '\n')
			|| (str[a] == '\v') || (str[a] == '\r') || (str[a] == '\f'))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			neg = neg * neg - 1;
		a++;
	}
	while ((str[a] >= '0') && (str[a] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[a] - '0';
		a++;
	}
	if (neg)
		return (-nbr);
	return (nbr);
}
