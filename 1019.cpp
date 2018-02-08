#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  double x;
  double fx;
  cin >> x;

  if (x >= 0 && x < 5)
  {
    fx = x + 2.5;
  }
  else if (x >= 5 && x < 10)
  {
    fx = 2 - 1.5 * (x-3) * (x-3);
  }
  else if (x >= 10 && x < 20)
  {
    fx = x / 2.0 - 1.5;
  }
  
  cout << fixed << setprecision(3) << fx << endl;

  return 0;
}

