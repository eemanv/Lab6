#include <iostream>
using namespace std;

float totalIncome(string screening_type , int rows , int columns);

main ()
{
  string screening_type;
  int rows;
  int columns;
  float func;
  cout << "Enter screening type: ";
  cin >> screening_type;  
  cout << " Number of rows: ";
  cin >> rows;
  cout << "Number of columns: ";
  cin >> columns;

  func = totalIncome(screening_type , rows , columns);
  cout << "Total income is " << func;
}
float totalIncome(string screening_type , int rows , int columns)
{
    float result ;
      if ( screening_type == "Premiere")
      {
        result = 12 * rows * columns;
      }
      else if (screening_type == "Normal")
      {
        result = 7.50 * rows * columns;
      }
      else if (screening_type == "Discount")
      {
        result = 5* rows * columns;
      }
      return result;
}