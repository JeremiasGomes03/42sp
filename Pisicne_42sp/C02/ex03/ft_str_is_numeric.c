/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:57:09 by jerda-si          #+#    #+#             */
/*   Updated: 2024/08/27 19:13:56 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//         char str[] = "1";

//         int result;
//         result  = ft_str_is_numeric(str);
//         printf("Resultado: %d\n", result);
//         return(0);
// }
