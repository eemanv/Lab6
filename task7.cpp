#include <iostream>
using namespace std;

float ticket(float budget , string category , int number);

main ()
{
    float budget;
    string category;
    int number;
    float func;
    float amountleft;

    cout << "Enter budget: ";
    cin >> budget;
    cout << "Category: ";
    cin >> category;
    cout << "Enter number of people: ";
    cin >> number;
    func = ticket( budget , category , number);
    if (func < budget)
    {
        amountleft = budget - func;
        cout << "Yes! You have " << amountleft << " leva left.";
    }
    else 
    {
        amountleft= func - budget;
        cout << "Not enough money! You need " << amountleft << "leva.";
    }

}
float ticket(float budget , string category , int number)
{
    float trans_cost;
    float price;
    float totalcost;

    if (number>=1 && number <=4)
    {
        trans_cost= budget * 0.75;
    }
    else if (number>=5 && number <=9)
    {
        trans_cost= budget * 0.60;
    }
    else if (number>=10 && number <=24)
    {
        trans_cost= budget * 0.50;
    }
    else if (number>=25 && number <=49)
    {
        trans_cost= budget * 0.40;
    }
     else if (number>=50)
    {
        trans_cost= budget * 0.25;
    }
    if (category == "VIP")
    {
        price= 499.99*number;
    }
    else if (category== "NORMAL")
    {
        price= 249.99* number; 
    }
    totalcost= trans_cost + price;
    
    return totalcost;
}