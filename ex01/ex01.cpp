/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:27:06 by jocasado          #+#    #+#             */
/*   Updated: 2024/07/07 17:29:14 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>

int main(int argc, char ** argv)
{
    std::cout << "This program works like a phone book\n"<< "Use:\n-Add: Adds a new contact to the PhoneBook\n-Search: Searchs for already existing contacts\n-Exit: Exit the program"<<std::endl;
    while (1)
    {
        std::string command;
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "Add")
        {
            std::cout << "Add" << std::endl;
        }
        else if (command == "Search")
        {
            std::cout << "Search" << std::endl;
        }
        else if (command == "Exit")
        {
            std::cout << "Exit" << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command" << std::endl;
        }
    }
    return 0;
}
