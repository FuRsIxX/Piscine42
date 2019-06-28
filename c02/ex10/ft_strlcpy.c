/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:53:23 by aboutin           #+#    #+#             */
/*   Updated: 2019/06/15 21:47:22 by aboutin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	a;

	cnt = 0;
	while (src[cnt] != '\0')
		cnt++;
	a = 0;
	while (src[a] != '\0' && a < (size - 1))
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (cnt);
}
