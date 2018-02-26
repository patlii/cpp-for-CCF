#include <iostream>

using namespace std;

int main()
{
  int a, b;
  long ans = 1;
  cin >> a >> b;

  a %= 10;
  for (int i = 0; i < b; ++i)
  {
    ans *= a;
    ans %= 10;
  }

  cout << ans << endl;

  return 0;
}

