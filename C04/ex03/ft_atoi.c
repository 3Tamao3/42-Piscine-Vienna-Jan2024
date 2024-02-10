/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 07:26:16 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/26 10:56:36 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 0 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			res = res * 10 + *str - '0';
			str++;
		}
	}
	return (res * sign);
}
/*
int main(int argc, char *argv[])
{
	printf("%d", ft_atoi("12345"));
	return (0);
}
*/
