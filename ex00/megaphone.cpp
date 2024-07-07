/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:27:15 by jocasado          #+#    #+#             */
/*   Updated: 2024/07/07 17:27:19 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{

int i;
int j;

i = 0;
j = -1;
if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
else
{
    while(argv[++i] != 0)
    {
        j = -1;
        while (argv[i][++j] != 0)
            std::cout << (char)toupper(argv[i][j]);
        std::cout << " ";
    }
    std::cout << std::endl;
}
return 0;
}
