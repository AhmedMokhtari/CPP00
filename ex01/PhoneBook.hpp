#pragma once

#include "Contact.hpp"

class PhoneBook{
    private:
        int count;
    public :
        int nb_contacts;
        Contact contacts[8];
        PhoneBook();
        void    add_new_contact(const Contact &Contact);
};