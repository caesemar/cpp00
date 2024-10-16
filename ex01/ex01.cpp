/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:27:06 by jocasado          #+#    #+#             */
/*   Updated: 2024/10/16 18:50:47 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Phonebook.hpp"
#include "Contacts.hpp"


void contacts::setter(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    _first_name = first_name;
    _last_name = last_name;
    _nickname = nickname;
    _phone_number = phone_number;
    _darkest_secret = darkest_secret;
}

std::string contacts::get_first_name()
{
    return (_first_name);
}

std::string contacts::get_last_name()
{
    return (_last_name);
}

std::string contacts::get_nickname()
{
    return (_nickname);
}

std::string contacts::get_phone_number()
{
    return (_phone_number);
}

std::string contacts::get_darkest_secret()
{
    return (_darkest_secret);
}
int Is_Printable(std::string str)
{
    int i;
    int lenght;

    i = 0;
    lenght = str.length();
    while (i < lenght)
    {
        if (str[i] < 32 || str[i] > 126)
            return 1;
        i++;
    }
    return 0;
}

int Phonebook::Add(int _index)
{
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

    if (_index < 8)
    {
        std::cout << "Enter the first name: ";
        std::getline(std::cin, _first_name);
        std::cout << "Enter the last name: ";
        std::getline(std::cin, _last_name);
        std::cout << "Enter the nickname: ";
        std::getline(std::cin,  _nickname);
        std::cout << "Enter the phone number: ";
        std::getline(std::cin, _phone_number);
        std::cout << "Enter the darkest secret: ";
        std::getline(std::cin, _darkest_secret);
        if (_first_name.empty() || _last_name.empty() || _nickname.empty() || _phone_number.empty() || _darkest_secret.empty())
        {
            std::cout << "Invalid contact" << std::endl;
            _first_name.clear();
            _last_name.clear();
            _nickname.clear();
            _phone_number.clear();
            _darkest_secret.clear();
            return 1;
        }
        if (Is_Printable(_first_name)|| Is_Printable(_last_name) || Is_Printable(_nickname) ||  Is_Printable(_phone_number) || Is_Printable(_darkest_secret))
        {
            std::cout << "Invalid character on contact" << std::endl;
            _first_name.clear();
            _last_name.clear();
            _nickname.clear();
            _phone_number.clear();
            _darkest_secret.clear();
            return 1;
        }
        _contacts[_index].setter(_first_name, _last_name, _nickname, _phone_number, _darkest_secret);
    }
    return 0;
}

void Phonebook::Search(int _index)
{
    int space_numer_1 = 0;
    int space_numer_2 = 0;
    int space_numer_3 = 0;
    int i = 0;
    std::string first_name_short;
    std::string last_name_short;
    std::string nickname_short;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    if (_index == 0)
    {
        std::cout << "The phonebook is empty" << std::endl;
    }
    else
    {
        std::cout << "     index|first name| last name|  nickname" << std::endl;
        while (i < _index)
        {
            first_name = _contacts[i].get_first_name();
            last_name = _contacts[i].get_last_name();
            nickname = _contacts[i].get_nickname();
            phone_number = _contacts[i].get_phone_number();
            darkest_secret = _contacts[i].get_darkest_secret();
            if (first_name.length() > 10)
                first_name_short = first_name.substr(0, 9) + ".";
            else
                first_name_short = first_name;
            if (last_name.length() > 10)
                last_name_short = last_name.substr(0, 9) + ".";
            else
                last_name_short = last_name;
            if (nickname.length() > 10)
                nickname_short = nickname.substr(0, 9) + ".";
            else
                nickname_short = nickname;
            space_numer_1 = 10 - first_name.length();
            space_numer_2 = 10 - last_name.length();
            space_numer_3 = 10 - nickname.length();
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
            i++;
        }
        std::string index;
        std::cout << "Enter the index of the contact: ";
        std::getline(std::cin, index);
        if (index.length() == 1 && index[0] >= '0' && index[0] <= '7' && index[0] < i + '0')
        {
            i = index[0] - '0';
            std::cout << "First name: " << _contacts[i].get_first_name() << std::endl;
            std::cout << "Last name: " << _contacts[i].get_last_name() << std::endl;
            std::cout << "Nickname: " << _contacts[i].get_nickname()<< std::endl;
            std::cout << "Phone number: " << _contacts[i].get_phone_number() << std::endl;
            std::cout << "Darkest secret: " << _contacts[i].get_darkest_secret() << std::endl;
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
