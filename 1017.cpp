#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  cout << "[1] apples\n";
  cout << "[2] pears\n";
  cout << "[3] oranges\n";
  cout << "[4] grapes\n";
  cout << "[0] Exit\n";

  double price[] = {3.00, 2.50, 4.10, 10.20};

  int n;
  cin >> n;
  if (n == 0) return 0;
  else if (n >= 1 && n <= 4)
    cout << "price=" << fixed << setprecision(1) << price[n-1];
  else
    cout << "price=" << 0;

  cout << endl;

  return 0;
}

