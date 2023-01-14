#include <iostream>
using namespace std;

char calculateGrade(int marks);
main ()
{
    int marks ;
    cout << "Enter marks: ";
    cin >> marks;
    char grade =calculateGrade( marks) ;
    cout << "Your Grade is " << grade ;
    
}
char calculateGrade(int marks)
{
    char result;
    if (marks < 50)
    {
    result= 'F';
    }
    else if (marks < 50 && marks < 60)
    {
        result ='E';
    }
    else if (marks >60 && marks <70)
    {
        result= 'D';
    }
    else if (marks>70 && marks < 80)
    {
        result= 'C';
    }
    else if (marks > 80 && marks < 85)
    {
        result ='B';
    }
    else if (marks > 85 >=100)
    {
        result ='A';
    }
         return result;
}