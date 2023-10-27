//////////////////////////////////////////////////////////////////////
//                                                                  //
//  Phone                                                           //
//  -----                                                           //
//  * the phone includes the following attributes:                  //
//    phone, type and description.                                  //
//  * the following functions:                                      //
//    edit (i.e. setPhone, setType, setDescription) and             //
//    getPHone (full phone format).                                 //
//                                                                  //
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

#ifndef PHONE_H
#define PHONE_H


class Phone
{
public:
    Phone();
    Phone(string, string, string);
    virtual ~Phone();

    void setPhone(string);
    void setType(string);
    void setDesc(string);

    bool isMatch(string) const;

    void print() const;
protected:

private:
    string m_phone;
    string m_type;
    string m_description;
};

#endif // PHONE_H
