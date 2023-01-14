#include <iostream>
using namespace std;
main ()
{
    int price;
    string brand;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter Brand Name: ";
    cin >> brand;

    if (price <=1500)
    {
        if (brand == "Almirah")
        {
            cout << "Good!" << endl;
        }
    else
       {
        cout << "Not Good.." << endl;
       }
}
}