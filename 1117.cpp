#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  sort(arr, arr + n);


  for (int i = 0; i < n; ++i) {
    cout << arr[i];
    if (i != n - 1) cout << ' ';
  }

  cout << endl;

}
