/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:39:11 by jerda-si          #+#    #+#             */
/*   Updated: 2024/09/03 19:09:19 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	dif;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		dif = s1[i] != s2[i];
		if (dif)
		{
			return (s1[i] - s2[i]);
		}	
		i++;
	}
	return (0);
}
// int main()
// {
// 	char s1[10] = "abca";
// 	char s2[10] = "abc";
// 	printf("Difereca %i\n", strcmp(s1, s2));
// 	printf("Difereca %i\n", ft_strcmp(s1, s2));
// }
