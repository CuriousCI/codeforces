#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, numbers, number;
	cin >> cases;

	while (cases--)
	{
		cin >> numbers;
		numbers <<= 1;

		uint16_t odd = 0, even = 0;

		while (numbers--)
		{
			cin >> number;
			if (number & 1)
				odd++;
			else
				even++;
		}

		cout << (odd == even ? "Yes" : "No") << endl;
	}
}