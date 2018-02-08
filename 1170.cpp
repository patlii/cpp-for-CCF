#include <iostream>
#include <cmath>

using namespace std;
void m1(long long n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      n /= i;
      cout << i << '*';
      i--;
    }
  }

  cout << n << endl;
}

int main()
{
  int N;
  cin >> N;

  m1(N);

  return 0;
}
