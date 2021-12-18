#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, size, value;
	cin >> cases;
	while (cases--)
	{
		cin >> size;
		uint64_t zeros = 0, ones = 0;
		while (size--)
		{
			cin >> value;
			if (!value)
				zeros++;
			else if (value == 1)
				ones++;
		}

		cout << (uint64_t)(ones * pow(2, zeros)) << endl;
	}
}