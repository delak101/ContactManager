//////////////////////////////////////////////////////////////////////
//                                                                  //
//  User                                                            //
//  ----                                                            //
//  * the user has the following attributes:                        //
//    id, firstname, lastname, gender, city, addDate.               //
//  * Included the following composed attributes as an array:       //
//    address, phone and email.                                     //
//  * A search function to find any data (phone number,             //
//    address, email, and so on) in users and return 1              //
//    if found and 0 otherwise.                                     //
//  * it also includes the following functions: add, edit and       //
//    delete for each phone, email and address.                     //
//  * A print function to display user information                  //
//    in suitable format.                                           //
//                                                                  //
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
#include <ctime>
#include "Phone.h"
#include "Email.h"
#include "Address.h"

using namespace std;

#ifndef USER_H
#define USER_H


class User
{
public:
    User();
    virtual ~User();

    void print() const;
    void readInput();

    void setUserId(int);
    void setFirstName(string);
    void setLastName(string);
    void setAge(int);
    void setGender(int);

    int getUserId()const;
    bool findAny(string) const;

protected:

private:
    int m_id;
    string m_firstname;
    string m_lastname;
    int m_gender; //0-male 1-female
    int m_age;

    time_t m_DateAdded;

    Phone * m_phones;
    Address * m_addresses;
    Email * m_emails;

    int m_phone_size;
    int m_address_size;
    int m_email_size;

    int m_phone_count;
    int m_address_count;
    int m_email_count;
};

#endif // USER_H
