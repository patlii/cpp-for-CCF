#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void m1()
{
  int n;
  vector<int> v;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    v.push_back(t);
  }

  auto max = *max_element(v.begin(), v.end());
  auto min = *min_element(v.begin(), v.end());

  cout << max - min << endl;
}

void m2()
{
  int n;
  int a[1000];
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  auto max = *max_element(a, a+n);
  auto min = *min_element(a, a+n);

  cout << max - min << endl;
}

int main()
{
  m2();

  return 0;
}
