/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:42:07 by jocasado          #+#    #+#             */
/*   Updated: 2024/10/17 15:42:38 by jocasado         ###   ########.fr       */
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