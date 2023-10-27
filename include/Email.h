//////////////////////////////////////////////////////////////////////
//                                                                  //
//  Email                                                           //
//  -----                                                           //
//  * the email includes the following attributes:                  //
//    email, type and description.                                  //
//  * the following functions:                                      //
//    edit (i.e. setEmail, setType, setDescription) and             //
//    getEmail (full email format).                                 //
//                                                                  //
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

#ifndef EMAIL_H
#define EMAIL_H


class Email
{
public:
    Email();
    Email(string, string, string);
    virtual ~Email();

    void setEmail(string);
    void setType(string);
    void setDesc(string);

    bool isMatch(string) const;

    void print() const;

protected:

private:
    string m_email;
    string m_type;
    string m_description;
};

#endif // EMAIL_H
