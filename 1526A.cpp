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
		vector<uint32_t> numbers(size * 2);
		for (auto &number : numbers)
			cin >> number;

		sort(numbers.begin(), numbers.end());
		for (auto index = 0; index < size; index++)
			cout << numbers[index] << ' ' << numbers[index + size] << ' ';
		cout << endl;
	}
}