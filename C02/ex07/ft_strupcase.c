/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:30:15 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:11:15 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char test1[] = "Boredlol";
	char test2[] = "acedw21";
	char test3[] = "UPPER";
	char test4[] = "lower";

	printf("Before: %s \n", test1);
	printf("After: %s \n", ft_strupcase(test1));

	printf("Before: %s \n", test2);
	printf("After: %s \n", ft_strupcase(test2));

	printf("Before: %s \n", test3);
	printf("After: %s \n", ft_strupcase(test3));

	printf("Before: %s \n", test4);
	printf("After: %s \n", ft_strupcase(test4));
}
*/
