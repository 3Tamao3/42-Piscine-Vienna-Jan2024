/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:35:47 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/27 15:57:24 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb == 0)
	{
		return (1);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			res *= nb;
			power--;
		}
		return (res);
	}
}
/*
int main(void)
{
	int a = 4;
	int b = 2;
	int res = ft_iterative_power(a, b);

	printf("%d power %d = %d", a, b, res);
}
*/
