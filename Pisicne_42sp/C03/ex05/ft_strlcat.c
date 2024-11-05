/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 20:43:10 by jerda-si          #+#    #+#             */
/*   Updated: 2024/09/04 18:55:24 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
			i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
			res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
dest[i] = '\0';
	return (res);
}
// int main(void) {
//     char dest1[10] = "";
//     char src1[10] = "olaa";
//     unsigned int size1 = 10;
//     unsigned int result1;
//     // Usando a sua função
//     result1 = ft_strlcat(dest1, src1, size1);
//     printf("Resultado: %u\n", result1);
//     printf("Destino: %s\n", dest1); 
//     return 0;
// }
