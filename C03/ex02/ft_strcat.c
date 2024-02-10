/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:59:47 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/28 18:45:54 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*origindest;

	origindest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	return (origindest);
}
/*
int main() {
    char destination[20] = "Conn";
    char source[] = "ected";

	
    ft_strcat(destination, source);
    printf("Result: %s\n", destination);

    return (0);
}
*/
