#include <iostream>
using namespace std;
float checkcost(string, string, int);

main()
{
        string city, product;
        int quantity;

        cout << "Enter the name of the product :";
        cin >> product;
        cout << "Enter the name of the city :";
        cin >> city;
        cout << "Enter the quantity :";
        cin >> quantity;

        
        float output;
        output = checkcost(city, product, quantity);
        cout << output << endl;
}
float checkcost(string city, string product, int quantity)
{
    float price;
    if (city == "sofia" && product == "coffee")
    {
        price = quantity * 0.5;
    }
    if (city == "sofia" && product == "water")
    {
        price = quantity * 0.8;
    }
    if (city == "sofia" && product == "beer")
    {
        price = quantity * 1.20;
    }
    if (city == "sofia" && product == "sweets")
    {
        price = quantity * 1.45;
    }
    if (city == "sofia" && product == "peanuts")
    {
        price = quantity * 1.6;
    }
    if (city == "plovdiv" && product == "coffee")
    {
        price = quantity * 0.4;
    }
    if (city == "plovdiv" && product == "water")
    {
        price = quantity * 0.7;
    }
    if (city == "plovdiv" && product == "beer")
    {
        price = quantity * 1.15;
    }
    if (city == "plovdiv" && product == "sweets")
    {
        price = quantity * 1.3;
    }
    if (city == "plovdiv" && product == "peanuts")
    {
        price = quantity * 1.5;
    }
    if (city == "varna" && product == "coffee")
    {
        price = quantity * 0.45;
    }
    if (city == "varna" && product == "water")
    {
        price = quantity * 0.7;
    }
    if (city == "varna" && product == "beer")
    {
        price = quantity * 1.10;
    }
    if (city == "varna" && product == "sweets")
    {
        price = quantity * 1.35;
    }
    if (city == "varna" && product == "peanuts")
    {
        price = quantity * 1.55;
    }
    return price;
}