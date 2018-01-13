/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrause- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:30:57 by dkrause-          #+#    #+#             */
/*   Updated: 2018/01/12 16:31:02 by dkrause-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	tmp;

	while (str[i] != '\0')
	{
		size++;
	}
	if (str)
	{
		i = 0;
		while (i < size / 2)
		{
			tmp = str[i];
			str[i] = str[size - i - 1];
			str[size - i - 1] = tmp;
			i++;
		}
	}
}
