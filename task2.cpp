#include <iostream>
using namespace std;

float func(string day , string month , int total_a);

main ()
{
    string day;
    string month;
    int total_a;
    cout << "Enter day :";
    cin >> day;
    cout << "Enter month : ";
    cin >> month;

   float finalprice = func(day, month, total_a);
    cout << " This is final price :" << finalprice << endl;


    cout << "total amount : ";
    cin >> total_a;
}
float func(string day , string month , int total_a)
{
    float payable;
    if (day == "sunday" && month == "october")
    {
        payable = total_a - total_a * 0.1;
        return payable;
    }

    else if (day != "sunday" && month == "october")
    {
        payable = total_a;
        return payable;
    }
    else if (day == "sunday" && month != "october")
    {
        payable = total_a - total_a*0.05;
        return payable;
    }
}
