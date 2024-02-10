/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 03:41:04 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/25 04:27:25 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcnp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main(void)
{
	char str[] = "abc";
	char str1[] = "abd";

	int i = ft_strcnp(str, str1);
	{
		if (i == 0)
		{
			printf("str = str1\n");
		}
		else if (i < 0)
		{
			printf("Str < str1\n");
		}
		else
		{
			printf("str > str1\n");
		}
	}
}
*/
