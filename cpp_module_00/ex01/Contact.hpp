#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iomanip>
#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void SetFirstName(std::string str);
        void SetLastName(std::string str);
        void SetNickName(std::string str);
        void SetPhoneNumber(std::string str);
        void SetDarkestSecret(std::string str);

        void PrintSearch(int index);
        void PrintSearchResult(void);
        std::string PrintColumn(std::string str);

        Contact(void);
        ~Contact(void);
};
#endif
