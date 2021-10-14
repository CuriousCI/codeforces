#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size, number;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint16_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		bool found = false;
		for (auto index = 1; index < size; index++)
		{
			if (!(numbers[index] & 1))
			{
				cout << 1 << endl
					 << index + 1 << endl;
				found = true;
			}
			else if (!(numbers[index - 1] & 1))
			{
				cout << 1 << endl
					 << index << endl;
				found = true;
			}
			else if ((numbers[index] & 1) && (numbers[index - 1] & 1))
			{
				cout << 2 << endl
					 << index + 1 << ' ' << index << endl;
				found = true;
			}
			if (found)
				break;
		}

		if (size == 1)
		{
			if (numbers[0] % 2 == 0)
				cout << 1 << endl
					 << 1 << endl;
			else
				cout << -1 << endl;
		}
		else
			cout << (found ? "" : "-1\n");
	}
}