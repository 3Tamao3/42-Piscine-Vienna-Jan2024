/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:31:47 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:09:27 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char test1[] = "undercaseig";
	char test2[] = "13123";
	char test3[] = "blbl123";
	char test4[] = "";

 	printf("%s R: %s\n", test1, ft_str_is_lowercase(test1) ? "True" : "False");
 	printf("%s R: %s\n", test2, ft_str_is_lowercase(test2) ? "True" : "False");
 	printf("%s R: %s\n", test3, ft_str_is_lowercase(test3) ? "True" : "False");
 	printf("%s R: %s\n", test4, ft_str_is_lowercase(test4) ? "True" : "False");
 }
*/
