#include <iostream>
#include <cmath>
#include <cfloat>
using namespace std;

int main()
{
  double x; //money
  int y; //time minuts
  cin >> x;

  if (x == 0.5)
  {
    y = 3;
  }
  else if ( x > 0.5)
  {
    y = 3 + floor(100 * DBL_EPSILON + (x - 0.5) / 0.2);
  }
  else
  {
    y = 0;
  }

  cout << y << endl;

  return 0;
}

