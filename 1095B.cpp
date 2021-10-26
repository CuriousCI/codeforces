#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size;
	cin >> size;
	vector<uint64_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	sort(numbers.begin(), numbers.end());
	cout << min(numbers[size - 2] - numbers.front(), numbers[size - 1] - numbers[1]) << endl;
}