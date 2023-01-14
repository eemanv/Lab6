#include <iostream>
using namespace std;

int isGreater(int number1 , int number2 , int number3 );


main ()
{
   int number1;
   int number2;
   int number3;
   cin >> number1;
   cin >> number2;
   cin >> number3;
   int result ;
    result = isGreater(number1 , number2 , number3);
    cout << "Greater number is " << result ;   
}

int isGreater(int number1 , int number2 , int number3 )
{
    int greatest;
    if (number1 > number2) 
    {
       if ( number1 > number3)
       {
        greatest = number1;
       }
    }
    else 
    {
        greatest = number3;
    }
    if (number2 > number1)
   {
      if (number2 > number3)
        {
          greatest= number2;
        }
      else
        {
        greatest= number3;
        }
   }
   if (number3 > number1)
   {
      if (number3 > number2)
        {
        greatest= number3;
        }
      else
        {
        greatest= number2;
        }
     } 
    return greatest;
}