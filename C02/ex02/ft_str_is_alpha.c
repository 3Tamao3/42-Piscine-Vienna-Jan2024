/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:24:34 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/29 11:37:26 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 66 && str[i] <= 90))
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
int main() {
    char test1[] = "HelloEwryone"; 
    char test2[] = "1337 9";        
    char test3[] = "bla321";     
    char test4[] = "";

    printf("T1: %s R: %s\n", test1, ft_str_is_alpha(test1) ? "True" : "False");
    printf("T2: %s R: %s\n", test2, ft_str_is_alpha(test2) ? "True" : "False");
    printf("T3: %s R: %s\n", test3, ft_str_is_alpha(test3) ? "True" : "False");
    printf("T4: %s R: %s\n", test4, ft_str_is_alpha(test4) ? "True" : "False");

}
*/
