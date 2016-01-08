/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 10:06:12 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/26 18:44:15 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	}
	return (*--s1 - *--s2);
}