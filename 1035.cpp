#include <iostream>

using namespace std;

int root(int);

int main()
{
  int n;
  cin >> n;

  cout << root(n) << endl;

  return 0;
}

int root(int n)
{
  if ( n < 10) return n;

  int r = 0;
  while ( n > 0)
  {
    r += n % 10;
    n /= 10;
  }
  //cout << r << endl;

  return root(r);
}
