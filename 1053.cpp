#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
  int m, n;
  cin >> m >> n;

  int pic[m][n];

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> pic[i][j];
    }
  }

  int tmp, count = 0;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      cin >> tmp;
      if (pic[i][j] == tmp)
        count += 1;
    }
  }

  cout << fixed << setprecision(2) << count * 100.0 / (m * n) << endl;

  return 0;
}
