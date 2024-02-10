/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:08:51 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:56:51 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	res = 1;
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
int main(void)
{
	int num = 5;
	int fac = ft_iterative_factorial(num);

	if(fac != 0)
	{
		printf("factorial of %d is %d", num, fac);
	}
	else
	{
		printf("put something valid in ><");
	}
}
*/
