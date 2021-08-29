#include <iostream>
#include <unordered_set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, length, number;

	cin >> cases;
	while (cases--)
	{
		cin >> length;
		length <<= 1;
		unordered_set<uint16_t> unique_numbers;
		vector<uint16_t> numbers;
		while (length--)
		{
			cin >> number;
			if (unique_numbers.find(number) == unique_numbers.end())
			{
				unique_numbers.insert(number);
				numbers.push_back(number);
			}
		}

		for (auto number : numbers)
			cout << number << ' ';
		cout << endl;
	}
}