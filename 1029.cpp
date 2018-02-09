#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	for (auto &c : str)
	{
		if (toupper(c) >= 'A' && toupper(c) <= 'W')
			c = c + 3;
		else if (toupper(c) >= 'X' && toupper(c) <= 'Z')
			c = c + 3 - 26;
	}
	cout << str << endl;

	return 0;
}
