#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length, corrections = 0, sublength = 0;
	string filename;

	cin >> length >> filename;

	for (auto letter : filename)
	{
		if (letter == 'x')
			sublength++;
		else
		{
			corrections += max(0, sublength - 2);
			sublength = 0;
		}
	}

	if (sublength)
		corrections += max(0, sublength - 2);

	cout << corrections;
}