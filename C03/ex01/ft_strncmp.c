/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 04:28:19 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/25 04:34:15 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
}

/*
int main(void) {
    char str1[] = "Hello";
    char str2[] = "Heold";

    int i = ft_strncmp(str1, str2, 3);

    if (i == 0) {
        printf("first 3 chars r equal.\n");
    } else if (i < 0) {
        printf("first 3 characters of str1 < str2.\n");
    } else {
        printf("first 3 characters of str1 > str2.\n");
    }

}
*/
