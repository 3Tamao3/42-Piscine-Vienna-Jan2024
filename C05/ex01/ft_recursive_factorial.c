/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:30:19 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/27 15:35:05 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
	int num = 5;
	int fac = ft_recursive_factorial(num);

	if (fac != 0)
	{
		printf("Factorial of %d is : %d", num, fac);
	}
	else
	{
		printf("Invalid input :3");
	}
}
*/
