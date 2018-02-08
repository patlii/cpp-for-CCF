#include <iostream>

void m1();

using namespace std;

int main()
{
  m1();

  return 0;
}


void m1()
{
  string word;
  cin >> word;
  int count = 1;

  for (int c : word)
  {
    count *= (c - 'a' + 1);
    count %= 10007;
    //cout << tmp << endl;
  }
  cout << count << endl;

}
