#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint16_t rows, columns;
		cin >> rows >> columns;

		for (auto y = 0; y < rows; y++)
		{
			for (auto x = 0; x < columns; x++)
				cout << (y == 0 && x == 0 ? 'W' : 'B');
			cout << endl;
		}
	}
}