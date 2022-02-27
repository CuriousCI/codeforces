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
		uint64_t number, operations = 0;
		cin >> number;

		while (!(number % 2 && number % 3 && number % 5) && number != 1)
		{
			if (number % 2 == 0)
				number /= 2;
			else if (number % 3 == 0)
			{
				number *= 2;
				number /= 3;
			}
			else if (number % 5 == 0)
			{
				number *= 4;
				number /= 5;
			}

			operations++;
		}

		cout << (number == 1 ? (int64_t)operations : -1) << endl;
	}
}