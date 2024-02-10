/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:41:32 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:10:09 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char test1[] = "SPACEGLIDE";
	char test2[] = "913219";
	char test3[] = "abc123";
	char test4[] = "";

	printf("%s R: %s\n", test1, ft_str_is_uppercase(test1) ? "True" : "False");
	printf("%s R: %s\n", test2, ft_str_is_uppercase(test2) ? "True" : "False");
	printf("%s R: %s\n", test3, ft_str_is_uppercase(test3) ? "True" : "False");
	printf("%s R: %s\n", test4, ft_str_is_uppercase(test4) ? "True" : "False");
}
*/
