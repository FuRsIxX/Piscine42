/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 07:44:29 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/26 07:52:25 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int cnt;

	if (power < 0)
		return (0);
	if (power > 0)
	{
		cnt = nb * ft_recursive_power(nb, power - 1);
		return (cnt);
	}
	else
		return (1);
}
