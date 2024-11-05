/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:41:50 by jerda-si          #+#    #+#             */
/*   Updated: 2024/09/03 19:09:04 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_i;

	dest_i = 0;
	i = 0;
	while (dest[dest_i])
	{
		dest_i++;
	}
	while (src[i] != '\0')
	{
		dest[dest_i] = src[i];
		i++;
		dest_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	  char s1 [50] = "jeremias";
//           char s2 [10] = " gomes";

// 	  ft_strcat(s1, s2);
// 	  //strcat(s1, s2);
// 	  printf("Concatenação:%s\n", s1);

// 	  return (0);
// }
