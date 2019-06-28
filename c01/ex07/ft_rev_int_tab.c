/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:40:53 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/10 19:20:13 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	b = 0;
	while (b < (size / 2))
	{
		a = tab[b];
		tab[b] = tab[size - (b + 1)];
		tab[size - (b + 1)] = a;
		b++;
	}
}