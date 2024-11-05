/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:01:09 by jerda-si          #+#    #+#             */
/*   Updated: 2024/08/27 19:19:11 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//         char str[] = "AA";

//         int result;
//         result  = ft_str_is_uppercase(str);
//         printf("Resultado: %d\n", result);
//         return(0);
// }
