#include <iostream>

using namespace std;
int main()
{
  int score;
  cin >> score;

  if (score >= 90)
    cout << "Excellent";
  else if (score >= 80 && score < 90)
    cout << "Good";
  else if (score >= 60 && score < 80)
    cout << "Pass";
  else
    cout << "Fail";

  cout << endl;

  return 0;
}
