#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;

	cin >> size;
	vector<int16_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	sort(numbers.begin(), numbers.end());
	for (auto number : numbers)
		if (number != numbers.front())
		{
			cout << number;
			return 0;
		}
	cout << "NO";
}