#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
//#include <iomanip>

/*
Constructor
*/
Phonebook::Phonebook(void)
{    
    this->addIndex = 0;
    this->addedContacts = 0;
    return;
}
/*
Deconstructor
*/
Phonebook::~Phonebook(void)
{    
    return;
}

void Phonebook::Add(void)
{
    std::string first_name_temp;
    std::string last_name_temp;
    std::string nickname_temp;
    std::string phone_number_temp;
    std::string darkest_secret_temp;

    std::cout << "Adding new contact" << std::endl;
    while (first_name_temp.length() == 0)
    {
        std::cout << "Name: ";
        std::getline(std::cin, first_name_temp);   
    }
    while (last_name_temp.length() == 0)
    {
        std::cout << "Last name: ";
        std::getline(std::cin, last_name_temp);
    }
    while (nickname_temp.length() == 0)
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, nickname_temp);
    }
    while (phone_number_temp.length() == 0)
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, phone_number_temp);
    }
    while (darkest_secret_temp.length() == 0)
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, darkest_secret_temp);
    }

    this->contacts[this->addIndex].SetFirstName(first_name_temp);
    this->contacts[this->addIndex].SetLastName(last_name_temp);
    this->contacts[this->addIndex].SetNickName(nickname_temp);
    this->contacts[this->addIndex].SetPhoneNumber(phone_number_temp);
    this->contacts[this->addIndex].SetDarkestSecret(darkest_secret_temp);
    if(this->addedContacts < 8)
        this->addedContacts++;
    else
        this->addedContacts = 8;
    if(this->addIndex == 7)
        this->addIndex = 0;
    else
        this->addIndex++;
}

void Phonebook::Search(void)
{
    int index;
    std::string indexStr;

    if(this->addedContacts == 0)
    {
        std::cout << "No contacts added" << std::endl;
        return ;
    }
    std::cout << "|";
    std::cout << std::setw(10) << "index";
    std::cout << "|";
    std::cout << std::setw(10) << "Firstname";
    std::cout << "|";
    std::cout << std::setw(10) << "Lastname";
    std::cout << "|";
    std::cout << std::setw(10) << "Nickname";
    std::cout << "|";
    std::cout << std::endl;
    for(int i = 0; i < this->addedContacts; i++)
    {
        contacts[i].PrintSearch(i);
    }
    while (true)
    {
        std::cout << "Give index: ";
        std::getline(std::cin, indexStr);
        if(indexStr.length() > 1 || !isdigit(indexStr[0]))
        {
            std::cout << "Error." << std::endl;      
            continue;
        }
        index = std::stoi(indexStr);
        if(isdigit(index))
            continue;
        if(index < 1 || index > this->addedContacts)
        {
            std::cout << "Error. Index out of bounds" << std::endl;      
            continue;
        }
        else
        {
            contacts[index - 1].PrintSearchResult();
            break;
        } 
    }
}
