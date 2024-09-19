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

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *find);

char	*ft_strstr(char *str, char *find)
{
	int	i;
	int	j;

	i = 0;
	if (find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == find[0])
		{
			j = 1;
			while (find[j])
			{
				if (str[i + j] != find[j])
					break ;
				++j;
			}
			return (&str[i]);
		}
		++i;
	}
	return (0);
}

/*
int main()
{
	char *str = "Hello World!";
	char *find = "";
	printf("%s \n", strstr(str, find));
}
*/