#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v{1,2,3};
  //for (auto &i : v)
  for (auto i : v)
    i *= i;

  cout << v[2];

  return  0;
}
