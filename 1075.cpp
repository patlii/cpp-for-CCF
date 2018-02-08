#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double m1(double x, int n)
{
  double t;
  t = sqrt(1 + x);
  for (int i = 2; i <= n; i++)
  {
    t = sqrt(i + t);
  }

  return t;
}

double m2(double x, int n)
{
  if (n == 1)
  {
    return sqrt(1 + x);
  }
  else
  {
    m2(sqrt(n - 1 + x), n - 1);
  }
}

int main()
{
  double x;
  int n;
  cin >> x >> n;

  cout << fixed << setprecision(2) << m2(x, n) << endl;

  return 0;
}
