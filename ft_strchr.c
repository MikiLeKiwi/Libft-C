/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 00:09:40 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/14 16:25:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while(s[i])
    {
        if (s[i] == (char)c)
        {
            return((char *)(s + i));
        }   
        i++;
    }
    if (s[i] == (char)c)
    {
        return((char *)(s + i));
    }
    return(NULL);
}

/*
int main()
{
    printf("%s", strchr("ouioehfi rgrog", 'r')); 
    printf("%s", "\n");
    printf("%s", ft_strchr("ouioehfi rgrog", 'r'));

} 

*/