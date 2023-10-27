#include <iostream>
#include <stdlib.h> //to use system("cls")
#include "Contact.h"

using namespace std;

int main()
{
    //main menu
    int input=-1;
    Contact Contact(100); //100 users
    while(input!=0)
    {
        cout<<"\n--------------------------------------\n"
            <<"1. Display All Users\n"
            <<"2. Add User\n"
            <<"3. Search\n"
            <<"4. Edit User\n"
            <<"5. Delete User\n"
            <<"0. Exit\n"
            <<"Enter number of desired operation:\n";
        cout<<"--------------------------------------\n";
        cin>>input;
        system("cls");
        switch(input)
        {
        case 1:
            Contact.print();
            break;
        case 2:
            Contact.AddUser();
            break;
        case 3:
            {
                string key;
                cout << "Enter Search Keyword: ";
                cin.ignore();
                getline(cin,key);
                Contact.ShowAll(key);
            }
            break;
        case 4:
            {
                int edit_id=0;
                cout << "Enter User ID: ";
                cin >> edit_id;
                Contact.EditUser(edit_id);
            }
            break;
        case 5:
            {
                int delete_id=0;
                cout << "Enter User ID: ";
                cin >> delete_id;
                Contact.DeleteUser(delete_id);
            }
            break;
        }
    }
    system("cls");
    cout<<"\n\n thank you for using Contact Manager :) \n\n";
}
