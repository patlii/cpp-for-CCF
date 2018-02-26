#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
  vector<int> score(10);

  for (int i = 0; i < 10; ++i)
    cin >> score[i];

  auto total = accumulate(score.begin(), score.end(), 0);
  auto high = *max_element(score.begin(), score.end());
  auto low = *min_element(score.begin(), score.end());

  cout << fixed << setprecision(3) << (total - high - low) / 8.0 << endl;
}

