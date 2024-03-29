/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 03:31:11 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/26 04:40:53 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int a;
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	a = 2;
	res = 1;
	while (a <= nb)
	{
		res *= a;
		a++;
	}
	return (res);
}
