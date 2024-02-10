/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:03:41 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/24 12:28:54 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char test1[] = "HEllo)(!)("")";
	char test2[] = "123456";
	char test3[] = "abc123";
	char test4[] = "";

	printf("T1:%s R:%s\n", test1, ft_str_is_printable(test1) ? "True" : "False");
	printf("T2:%s R:%s\n", test2, ft_str_is_printable(test2) ? "True" : "False");
	printf("T3:%s R:%s\n", test3, ft_str_is_printable(test3) ? "True" : "False");
 	printf("T4:%s R:%s\n", test4, ft_str_is_printable(test4) ? "True" : "False");
}
*/
