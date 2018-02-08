#include <iostream>
#include <iomanip>
#include <cmath>
/* 此题结果空格是两个 */

using namespace std;

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    int k;
    double x;

    cin >> k >> x;

    cout.precision(3);
    if (k == 1)
    {
      cout << fixed << sqrt(x);
    }
    else if (k == 2)
    {
      x = x * 3.1415926 / 180.0;
      cout << fixed << sin(x) << "  " << cos(x) << "  " << tan(x);
    }
    else if (k == 3)
    {
      cout << fixed << asin(x) << "  " << acos(x);
    }
    else if (k == 4)
    {
      cout << fixed << atan(x);
    }

    cout << endl;
  }

  return 0;
}
