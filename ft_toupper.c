/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:46:17 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/14 11:21:50 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    return(c);
}

/*
int main()
{
    printf("%d", ft_toupper('s')); 
    printf("%d", toupper('s'));
}
*/