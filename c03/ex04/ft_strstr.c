/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:30:36 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/19 18:30:36 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *find);

char	*ft_strstr(char *str, char *find)
{
	int	i;
	int	j;
	int	boolflag;

	i = 0;
	if (find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == find[0])
		{
			j = 1;
			boolflag = 1;
			while (find[j])
			{
				if (str[i + j] != find[j])
					boolflag = 0;
				++j;
			}
			if (boolflag)
				return (str + i);
		}
		++i;
	}
	return (NULL);
}

/*

//ask chat gpt to generate tricky cases to fully understand how the function works
#include <string.h>
#include <stdio.h>

int main()
{
	char *str = "Hello World!";
	char *find = "";
	printf("%s \n", strstr(str, find));
}
*/
