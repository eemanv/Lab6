#include <iostream>
using namespace std;

int isGreater(int number1 , int number2 , int number3 );


main ()
{
    int result ;
    result = isGreater(100, 78, 45 );
    cout << "Greater number is " << result ;   
}

int isGreater(int number1 , int number2 , int number3 )
{
    int greatest;
    if (number1 > number2 && number1 > number3)
    {
        greatest= number1;
    }
    else if (number2 > number3 && number2 > number1)
    {
        greatest= number2;
    }
    else if (number1 < number3 && number2 < number3)
    {
        greatest= number3;
    }
    else
    {
        greatest= number1;
    }
    return greatest;
}
