/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:39:17 by jocasado          #+#    #+#             */
/*   Updated: 2024/10/17 15:40:10 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"
#include "Contacts.hpp"

int main()
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
        if (std::cin.eof())
        {
            phonebook.Exit();
            break;
        }
        if (command == "ADD")
        {
            if (index == 7)
                index = -1;
            index++;
            result = phonebook.Add(index);
            if (result == 1)
                index--;
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