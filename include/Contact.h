//////////////////////////////////////////////////////////////////////
//                                                                  //
//  Contact                                                         //
//  -------                                                         //
//  * Store the list of users.                                      //
//  * With the ability to add/edit and delete users.                //
//  * A count value that returns the number of users.               //
//  * A search function to look up.                                 //
//  * A print all function returns all users in suitable format.    //
//                                                                  //
//////////////////////////////////////////////////////////////////////
#include "User.h"
#include <string>

using namespace std;

#ifndef CONTACT_H
#define CONTACT_H


class Contact
{
public:
    Contact(int);
    virtual ~Contact();

    void AddUser();
    void EditUser(int);
    void DeleteUser(int);
    void print()const;
    void ShowAll(string)const;
protected:

private:
    int m_count;
    int m_size;
    User * m_users; //composition class
};

#endif // CONTACT_H
