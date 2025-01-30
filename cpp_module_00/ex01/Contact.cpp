#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void Contact::PrintSearchResult(void)
{
    std::cout << "First name     " << this->first_name << std::endl;
    std::cout << "Last name      " << this->last_name << std::endl;
    std::cout << "Nickname       " << this->nickname << std::endl;
    std::cout << "Phone number   " << this->phone_number << std::endl;
    std::cout << "Darkest secret " << this->darkest_secret << std::endl;
}

std::string Contact::PrintColumn(std::string str)
{
    std::string temp;

    temp = str;
    if(temp.length() > 10)
    {
        temp.resize(9);
        temp.append(".");
    }    
    return (temp);
}

void Contact::PrintSearch(int index)
{
    std::cout << "|";
    std::cout << std::setw(10) << index + 1;
    std::cout << "|";
    std::cout << std::setw(10) << Contact::PrintColumn(this->first_name);
    std::cout << "|";
    std::cout << std::setw(10) << Contact::PrintColumn(this->last_name);
    std::cout << "|";
    std::cout << std::setw(10) << Contact::PrintColumn(this->nickname);
    std::cout << "|";
    std::cout << std::endl;
}
void Contact::SetFirstName(std::string str)
{
    first_name = str;
}
void Contact::SetLastName(std::string str)
{
    last_name = str;
}
void Contact::SetNickName(std::string str)
{
    nickname = str;
}
void Contact::SetPhoneNumber(std::string str)
{
    phone_number = str;
}
void Contact::SetDarkestSecret(std::string str)
{
    darkest_secret = str;
}
