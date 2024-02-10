/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:19:13 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:59:28 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	res;

	if (nb < 0)
	{
		return (0);
	}
	res = 0;
	while (res * res <= nb)
	{
		if (res * res == nb)
		{
			return (res);
		}
		res++;
	}
	return (0);
}
/*
int main(void)
{
		int nb = 100;
		printf("%d\n", ft_sqrt(nb));
		int nb1 = 9;
		printf("%d\n", ft_sqrt(nb1));
		int nb2 = 169;
		printf("%d\n", ft_sqrt(nb2));
}
*/
