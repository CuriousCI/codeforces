#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases, size;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> size;
		for (uint16_t permutation = 1; permutation <= size; permutation++)
		{
			cout << permutation;
			for (auto number = size; number > 0; number--)
				if (number != permutation)
					cout << ' ' << number;
			cout << endl;
		}
	}
}