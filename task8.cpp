#include <iostream>
#include <cmath>
using namespace std;

main()
{
string leapYear;
int holidays;
int weekendsInHome;
float playing;
float TotalPlayingTime;
float playingInHolidays;
float playingSofia;
float playingHometown;
float NotTravellingWeekends;
float weekendsInSofia;

cout<<"Enter the type of year: ";
cin>>leapYear;
cout<<"Enter the number of holidays: ";
cin>>holidays;
cout<<"Enter the number of weekends V goes to hometown: ";
cin>>weekendsInHome;

weekendsInSofia = 48 - weekendsInHome;
playingInHolidays = holidays*2/3;
playingSofia = playingInHolidays + (weekendsInSofia * 3/4);
playingHometown = weekendsInHome;
TotalPlayingTime = playingSofia + playingHometown;

    if(leapYear == "Normal")
    {
        playing = TotalPlayingTime;
        playing = floor(playing);
        cout<<playing;
    }
    
    else if(leapYear == "Leap")
    {
        playing = TotalPlayingTime + (TotalPlayingTime*0.15);
        playing = floor(playing);
        cout<<playing;
    }
}