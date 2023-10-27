//////////////////////////////////////////////////////////////////////
//                                                                  //
//  Address                                                         //
//  -------                                                         //
//  * the address includes the following attributes:                //
//    place, type and description.                                  //
//  * the following functions:                                      //
//    edit (i.e. setPlace, setType, setDescription) and             //
//    getAddress (full address format).                             //
//                                                                  //
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include <string>

using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H


class Address
{
public:
    Address();
    Address(string, string, string);
    virtual ~Address();

    void setAddress(string);
    void setType(string);
    void setDesc(string);

    bool isMatch(string) const;

    void print() const;
protected:

private:
    string m_address;
    string m_type;
    string m_description;
};

#endif // ADDRESS_H
