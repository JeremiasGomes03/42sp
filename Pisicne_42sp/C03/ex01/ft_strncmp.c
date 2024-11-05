/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerda-si <jerda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:45:07 by jerda-si          #+#    #+#             */
/*   Updated: 2024/09/04 21:04:28 by jerda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{	
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*void test_strncmp(const char *s1, const char *s2, unsigned int n) {
    int result_libc = strncmp(s1, s2, n);
     int result_custom = ft_strncmp((char *)s1, (char *)s2, n);
     printf("Comparando \"%s\" e \"%s\" com n = %u\n", s1, s2, n);
     printf("   strncmp: %d\n", result_libc);
     printf("   ft_strncmp: %d\n", result_custom);
 printf("   %s\n\n", result_libc == result_custom ? "OK" : "NOK");

 }

 int main(void) {
     // Casos de teste
     test_strncmp("jeremias", "eremias", 5); 
     test_strncmp("jeremias", "jeremias", 9);
     test_strncmp("jeremias", "jeremias", 10); 
     test_strncmp("jeremias", "jeremias", 0);  
     test_strncmp("jeremias", "jeremia", 8);   
     test_strncmp("jeremias", "jeremian", 9);  
     test_strncmp("jeremias", "", 5);          
     test_strncmp("", "jeremias", 5);          
     test_strncmp("", "", 5);                 
     test_strncmp("abc", "abd", 3);           
     test_strncmp("abc", "abcd", 4);           
     return 0;
 }*/
