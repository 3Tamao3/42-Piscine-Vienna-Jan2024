/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:47:07 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:08:23 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			++i;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main(void)
{
	char test1[] = "Spicy";
	char test2[] = "362621";
	char test3[] = "one123";
	char test4[] = "";

	printf("T1: %s R: %s\n", test1, ft_str_is_numeric(test1) ? "True" : "False");
	printf("T2: %s R: %s\n", test2, ft_str_is_numeric(test2) ? "True" : "False");
	printf("T3: %s R: %s\n", test3, ft_str_is_numeric(test3) ? "True" : "False");
	printf("T4: %s R: %s\n", test4, ft_str_is_numeric(test4) ? "True" : "False");
}
*/
