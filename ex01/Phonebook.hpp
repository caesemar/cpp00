/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:26:55 by jocasado          #+#    #+#             */
/*   Updated: 2024/07/23 18:33:05 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

#ifndef PHONEBOOK_HPP
class Phonebook
{
    public:
        Phonebook();
        ~Phonebook();
        int Add(int _index);
        void Search(int _index);
        void Exit();
    class contacts
    {
        public:
            std::string _first_name;
            std::string _last_name;
            std::string _nickname;
            std::string _phone_number;
            std::string _darkest_secret;
    };
    private:
        contacts _contacts[8];
        int _index;
};

Phonebook::Phonebook()
{
    std::cout << "This program works like a phone book\n"<< "Use:\n-Add: Adds a new contact to the PhoneBook\n-Search: Searchs for already existing contacts\n-Exit: Exit the program"<<std::endl;
    
}

Phonebook::~Phonebook()
{
}

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
    if (_index == 0)
    {
        std::cout << "The phonebook is empty" << std::endl;
    }
    else
    {
        std::cout << "index | first name | last name | nickname" << std::endl;
        for (int i = 0; i < _index; i++)
        {
            std::cout << "         " << i << "|" << _contacts[i]._first_name << "|" << _contacts[i]._last_name << "|" << _contacts[i]._nickname << std::endl;
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
#endif