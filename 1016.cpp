#include <iostream>

using namespace std;
bool is366(int year)
{
  return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? true : false;
}

int main()
{
  int year, month;
  cin >> year >> month;

  switch(month)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      cout << 31; break;
    case 2:
      cout << (is366(year) ? 29 : 28); break;
    default:
      cout << 30;
  }

  cout << endl;

  return 0;
}
