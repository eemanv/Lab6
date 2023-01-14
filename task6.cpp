#include <iostream>
using namespace std;

float totalIncome(string time  , int km );

main ()
{
    string time;
    int km ;
    cout << "Enter time: ";
    cin >> time ;
    cout << "Enter kilometers: ";
    cin >> km;

    float func = totalIncome(time , km);
    cout << "Lowest price : " << func;
}

float totalIncome(string time  , int km)
{
   float amount;
   if ( time == "day" && km < 20 )
    {
        amount = 0.70 + 0.79 * km ; 
    }
   else if (time == "night" && km < 20)
   {
      amount = 0.70 + 0.90 * km ;
   }
   else if (km > 20 && km < 100 )
   {
     amount = 0.09 * km ;
   }
   else if (km > 100)
   {
    amount = 0.06 * km;
   }
   return amount;
}