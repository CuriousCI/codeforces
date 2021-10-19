#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size, longest = 1, temporary = 1;

	cin >> size;
	vector<uint64_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	for (auto index = 1; index < size; index++)
		if (numbers[index] > numbers[index - 1])
		{
			temporary++;
			longest = max(temporary, longest);
		}
		else
		{
			temporary = 1;
		}

	cout << longest;
}