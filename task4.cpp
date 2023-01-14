#include <iostream>
using namespace std;

string checkSpeed (float speed);

main ()
{
    float speed;
    cout << " Enter speed: ";
    cin >> speed ;
    string func = checkSpeed (speed);
    cout << " Speed Info is '" << func << "'";
}

string checkSpeed (float speed)
{
    string info;
    if (speed <=10)
    {
        info = "slow ";
    }
    else if (speed > 10 && speed < 50 )
    {
        info = " average ";
    }
    else if (speed > 50 && speed < 150 )
    {
        info = "fast";
    }
    else if (speed > 150 && speed < 1000)
    {
        info = " Ultra-fast";
    }
    else (speed > 1000);
    {
        info = " Extremely Fast";
    }
    return info;
}