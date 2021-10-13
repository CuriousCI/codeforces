#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint16_t> numbers(size);
		uint16_t biggest = 0, mostest = 0;
		for (auto &number : numbers)
		{
			cin >> number;
			biggest = max(biggest, number);
		}

		vector<uint16_t> frequency(biggest + 1, 0);

		for (auto number : numbers)
			mostest = max(++frequency[number], mostest);

		cout << mostest << endl;
	}
}