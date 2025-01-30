#include <iostream>
#include "Phonebook.hpp"
// #include "Contact.hpp"

int main(void)
{
    Phonebook phonebook;
    std::string buf;
    std::string instructions = "Type ADD to add contact, SEARCH to search to print contacts and EXIT to exit.";
    std::cout << instructions << std::endl;
    while (true)
    {
        std::cout << "Phonebook $>";
        std::getline(std::cin, buf);         
        if (!buf.compare("EXIT"))
            break;
        else if (!buf.compare("ADD"))
            phonebook.Add();
        else if (!buf.compare("SEARCH"))
            phonebook.Search();
        else
            std::cout << instructions << std::endl;
    }
}
