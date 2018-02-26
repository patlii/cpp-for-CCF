#include <iostream>
#include <string>

using namespace std;

int main()
{
  int x;
  string str;
  cin >> x;

  str = to_string(x);
  cout << str.length() << endl;
  for ( auto ch : str )
  {
    cout << ch << endl;
  }
}

