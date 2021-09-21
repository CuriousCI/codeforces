#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t cases, size, operations;
	cin >> cases;

	while (cases--)
	{
		cin >> size >> operations;

		vector<int32_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		int32_t position = 0;
		while (operations && position < size - 1)
			if (numbers[position])
			{
				int32_t sub = min(operations, numbers[position]);
				operations -= sub;
				numbers[position] -= sub;
				numbers[size - 1] += sub;
			}
			else
				position++;

		for (auto number : numbers)
			cout << number << ' ';
		cout << endl;
	}
}