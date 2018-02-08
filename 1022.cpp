#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  int n;
  double total;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int age;
    cin >> age;
    total += age;
  }

  cout << fixed << setprecision(2) << total / n << endl;

  return 0;
}
