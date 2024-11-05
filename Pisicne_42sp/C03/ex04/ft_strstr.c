/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:22:13 by jerda-si          #+#    #+#             */
/*   Updated: 2024/09/05 01:15:29 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*substr;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		start = str;
		substr = to_find;
		while (*substr != '\0' && *str != '\0' && *str == *substr)
		{
			str++;
			substr++;
		}
		if (*substr == '\0')
			return (start);
		str = start + 1;
	}
	return (0);
}

/* int main(void) {
     char str[100];
     char to_find[50];
     char *result_ft;
     char *result_std;

     // Teste 1: Substring presente no meio da string
     strcpy(str, "Hello, World!");
     strcpy(to_find, "");
     result_ft = ft_strstr(str, to_find);
     result_std = strstr(str, to_find);
     printf("Teste 1 - ft_strstr: %s\n", result_ft ? result_ft : "NULL");
     printf("Teste 1 - strstr: %s\n", result_std ? result_std : "NULL");

     // Teste 2: Substring no início da string
     strcpy(str, "OpenAI is awesome!");
     strcpy(to_find, "OpenAI");
     result_ft = ft_strstr(str, to_find);
     result_std = strstr(str, to_find);
     printf("Teste 2 - ft_strstr: %s\n", result_ft ? result_ft : "NULL");
     printf("Teste 2 - strstr: %s\n", result_std ? result_std : "NULL");

     // Teste 3: Substring não presente na string
     strcpy(str, "No match here");
     strcpy(to_find, "example");
     result_ft = ft_strstr(str, to_find);
     result_std = strstr(str, to_find);
     printf("Teste 3 - ft_strstr: %s\n", result_ft ? result_ft : "NULL");
     printf("Teste 3 - strstr: %s\n", result_std ? result_std : "NULL");

     // Teste 4: Substring igual a string
     strcpy(str, "Exact match");
     strcpy(to_find, "Exact match");
     result_ft = ft_strstr(str, to_find);
     result_std = strstr(str, to_find);
     printf("Teste 4 - ft_strstr: %s\n", result_ft ? result_ft : "NULL");
     printf("Teste 4 - strstr: %s\n", result_std ? result_std : "NULL");

     // Teste 5: Substring vazia
     strcpy(str, "Some text");//     strcpy(to_find, "");
     result_ft = ft_strstr(str, to_find);
    result_std = strstr(str, to_find);
     printf("Teste 5 - ft_strstr: %s\n", result_ft ? result_ft : "NULL");
     printf("Teste 5 - strstr: %s\n", result_std ? result_std : "NULL");

     // Teste 6: String vazia
     strcpy(str, "");
     strcpy(to_find, "anything");
     result_ft = ft_strstr(str, to_find);
     result_std = strstr(str, to_find);
     printf("Teste 6 - ft_strstr: %s\n", result_ft ? result_ft : "NULL");
     printf("Teste 6 - strstr: %s\n", result_std ? result_std : "NULL");

     return 0;
}*/
