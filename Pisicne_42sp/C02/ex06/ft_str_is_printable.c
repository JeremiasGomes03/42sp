/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:09:33 by jerda-si          #+#    #+#             */
/*   Updated: 2024/08/27 19:19:20 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (str == NULL)
	{
		return (0);
	}
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//         char str[] = "a\n";

//         int result;
//         result  = ft_str_is_printable(str);
//         printf("Resultado: %d\n", result);
//         return(0);
// }
