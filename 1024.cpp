#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long N;
	long total = 2;
	cin >> N;

	for (long i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0) total +=2;
	}

	if (ceil(sqrt(N)) * ceil(sqrt(N)) == N) total--;

	cout << total << endl;

	return 0;
}

