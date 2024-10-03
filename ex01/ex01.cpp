/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:27:06 by jocasado          #+#    #+#             */
/*   Updated: 2024/10/03 15:35:18 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Phonebook.hpp"


int Phonebook::Add(int _index)
{
    if (_index < 8)
    {
        std::cout << "Enter the first name: ";
        std::getline(std::cin, _contacts[_index]._first_name);
        std::cout << "Enter the last name: ";
        std::getline(std::cin, _contacts[_index]._last_name);
        std::cout << "Enter the nickname: ";
        std::getline(std::cin, _contacts[_index]._nickname);
        std::cout << "Enter the phone number: ";
        std::getline(std::cin, _contacts[_index]._phone_number);
        std::cout << "Enter the darkest secret: ";
        std::getline(std::cin, _contacts[_index]._darkest_secret);
        if (_contacts[_index]._first_name.empty() || _contacts[_index]._last_name.empty() || _contacts[_index]._nickname.empty() || _contacts[_index]._phone_number.empty() || _contacts[_index]._darkest_secret.empty())
        {
            std::cout << "Invalid contact" << std::endl;
            _contacts[_index]._first_name.clear();
            _contacts[_index]._last_name.clear();
            _contacts[_index]._nickname.clear();
            _contacts[_index]._phone_number.clear();
            _contacts[_index]._darkest_secret.clear();
            return 1;
        }
    }
    return 0;
}

void Phonebook::Search(int _index)
{
    int space_numer_1 = 0;
    int space_numer_2 = 0;
    int space_numer_3 = 0;
    std::string first_name_short;
    std::string last_name_short;
    std::string nickname_short;

    if (_index == 0)
    {
        std::cout << "The phonebook is empty" << std::endl;
    }
    else
    {
        std::cout << "     index|first name| last name|  nickname" << std::endl;
        for (int i = 0; i < _index; i++)
        {
            if (_contacts[i]._first_name.length() > 10)
                first_name_short = _contacts[i]._first_name.substr(0, 9) + ".";
            else
                first_name_short = _contacts[i]._first_name;
            if (_contacts[i]._last_name.length() > 10)
                last_name_short = _contacts[i]._last_name.substr(0, 9) + ".";
            else
                last_name_short = _contacts[i]._last_name;
            if (_contacts[i]._nickname.length() > 10)
                nickname_short = _contacts[i]._nickname.substr(0, 9) + ".";
            else
                nickname_short = _contacts[i]._nickname;
            space_numer_1 = 10 - _contacts[i]._first_name.length();
            space_numer_2 = 10 - _contacts[i]._last_name.length();
            space_numer_3 = 10 - _contacts[i]._nickname.length();
            std::cout << "         " << i << "|";
            for (int j = 0; j < space_numer_1; j++)
                std::cout << " ";
            std::cout << first_name_short << "|";
            for (int j = 0; j < space_numer_2; j++)
                std::cout << " ";
            std::cout << last_name_short << "|";
            for (int j = 0; j < space_numer_3; j++)
                std::cout << " ";
            std::cout << nickname_short << std::endl;
        }
        std::string index;
        std::cout << "Enter the index of the contact: ";
        std::getline(std::cin, index);
        if (index.length() == 1 && index[0] >= '0' && index[0] <= '7')
        {
            int i = index[0] - '0';
            std::cout << "First name: " << _contacts[i]._first_name << std::endl;
            std::cout << "Last name: " << _contacts[i]._last_name << std::endl;
            std::cout << "Nickname: " << _contacts[i]._nickname << std::endl;
            std::cout << "Phone number: " << _contacts[i]._phone_number << std::endl;
            std::cout << "Darkest secret: " << _contacts[i]._darkest_secret << std::endl;
        }
        else
        {
            std::cout << "Invalid index" << std::endl;
        }
    }
}

void Phonebook::Exit()
{
    std::cout << "Exit" << std::endl;
}

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
