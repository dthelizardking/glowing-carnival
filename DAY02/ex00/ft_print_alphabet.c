/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrause- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:07:59 by dkrause-          #+#    #+#             */
/*   Updated: 2018/01/11 13:17:38 by dkrause-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int         ft_putchar (char c)
{   
            write (1,&c,1); 
            return (0);
}

int         main (void)
{
            int buffer;
            
            buffer=97;
            while (buffer < 123)
            {
                ft_putchar ((char)buffer);
                buffer = buffer +1;
            }
            return (0);
}

