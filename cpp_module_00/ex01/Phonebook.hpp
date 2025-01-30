#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class Phonebook
{
    private:
        int CheckDigits(std::string str);
        int addIndex;
        int addedContacts;
    
    public:
        Contact contacts[8];

        Phonebook(void);
        ~Phonebook(void);
        
        void Add(void);
        void Search(void);
};
#endif
