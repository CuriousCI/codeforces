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
	vector<int64_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	for (auto index = 0; index < size - 1; index++)
		cout << numbers[index] + numbers[index + 1] << ' ';
	cout << numbers.back();
}