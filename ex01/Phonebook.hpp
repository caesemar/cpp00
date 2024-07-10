/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:26:55 by jocasado          #+#    #+#             */
/*   Updated: 2024/07/10 19:11:13 by jocasado         ###   ########.fr       */
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
        void Add();
        void Search();
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

void Phonebook::Add()
{
    
}
#endif