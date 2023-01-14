#include <iostream>
using namespace std;

string checkTitle(int age , char gender);


main ()
{
    int age ;
    char gender;
    cout << "Enter age ";
    cin >> age;
    cout << "Enter gender ";
    cin >> gender;
    string func = checkTitle( age , gender);
    cout << "Personal Title is " << func;

}


string checkTitle(int age , char gender)
{
    string title;
    if ( gender == 'm' && (age >=16) )
     {
         title = " MR.";
     }
    else if ( gender == 'm' && ( age < 16) )
    {
        title = " Master ";
    }
    else if ( gender == 'f' && ( age >= 16) )
    {
        title = " Ms. ";
    }
    else if ( gender == 'f' && (age < 16) )
    {
        title = "Miss ";
    }
    return title;
}

