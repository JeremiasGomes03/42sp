/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:17:11 by jerda-si          #+#    #+#             */
/*   Updated: 2024/08/27 19:15:17 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
// int main(void)
// {
//         char str[] = "aaa";

//         int result;
//         result  = ft_str_is_lowercase(str);
//         printf("Resultado: %d\n", result);
//         return(0);
// }
