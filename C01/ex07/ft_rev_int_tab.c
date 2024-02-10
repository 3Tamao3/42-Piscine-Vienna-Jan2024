/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reozbay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:32:18 by reozbay           #+#    #+#             */
/*   Updated: 2024/01/18 13:19:33 by reozbay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	element;

	i = 0;
	while (i < size / 2)
	{
		element = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = element;
		i++;
	}
}
/*
int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);
    
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
*/
