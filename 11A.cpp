#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	uint64_t coefficient, moves = 0;

	cin >> size >> coefficient;
	vector<uint64_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	for (auto index = 1; index < size; index++)
		if (numbers[index] <= numbers[index - 1])
		{
			uint64_t temp = ceil((double)(numbers[index - 1] - numbers[index]) / coefficient);
			numbers[index] += temp * coefficient;
			moves += temp;

			if (numbers[index] == numbers[index - 1])
			{
				moves++;
				numbers[index] += coefficient;
			}
		}

	cout << moves;
}