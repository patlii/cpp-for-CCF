#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n;
	cin >> n;

	vector<int> a(n + 1);
	vector<int> b(n + 1);
	vector<int> c(n + 1);
	for (int i = 1; i < n + 1; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}

	for (int i = 1; i < n + 1; i++)
	{
		a[0] += a[i];
		b[0] += b[i];
		c[0] += c[i];
	}

	cout << a[0] << ' ' << b[0] << ' ' << c[0] << ' ' << a[0] + b[0] + c[0] << endl;

	return 0;
}

