/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthwe <tthwe@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 00:20:18 by tthwe             #+#    #+#             */
/*   Updated: 2026/01/06 00:27:09 by tthwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	if (s1)
	{
		while (*s1)
			*(s2++) = *(s1++);
		*s2 = '\0';
		return s2;
	}
	else 
		return NULL;
}

int main (void)
{
	char *s1;
	char *s2;

	s2 = NULL;
	s1 = "wo zui shuai";
	ft_strcpy(s1, s2);
	printf("%s", s2);
}