/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:27:06 by jocasado          #+#    #+#             */
/*   Updated: 2024/07/23 18:43:44 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>
#include "Phonebook.hpp"

int main(int argc, char ** argv)
{
    Phonebook phonebook;
    std::string command;
    int index = -1;
    int contacs_filled = 0;
    int result = 0;
    while (1)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            if (index == 7)
                index = -1;
            index++;
            result = phonebook.Add(index);
            std::cout << result << std::endl;   
            if (result == 1)
                index--;
            std::cout << index << std::endl; 
            if (contacs_filled < 8 && result == 0)
                contacs_filled++;
        }
        else if (command == "SEARCH")
        {
            if (contacs_filled == 0)
                std::cout << "No contacts to search" << std::endl;
            else
                phonebook.Search(contacs_filled);
        }
        else if (command == "EXIT")
        {
            phonebook.Exit();
            break;
        }
        else
            std::cout << "Invalid command" << std::endl;
    }
    return 0;
}
