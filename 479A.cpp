#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint32_t> numbers(3);
	for (auto &number : numbers)
		cin >> number;
	cout << max({
		numbers[0] * numbers[1] * numbers[2],
		numbers[0] + numbers[1] + numbers[2],
		(numbers[0] + numbers[1]) * numbers[2],
		numbers[0] * (numbers[1] + numbers[2]),
	});
}