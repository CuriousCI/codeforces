#include <iostream>
#include <algorithm>
#include <cstdint>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(NULL);

	vector<uint64_t> numbers(4);
	for (auto &number : numbers)
		cin >> number;

	auto max = max_element(numbers.begin(), numbers.end()),
		 min = min_element(numbers.begin(), numbers.end());

	for (auto number = numbers.begin(); number < numbers.end(); number++)
		if (number != max && number != min)
		{

			cout << *max - *min
				 << ' '
				 << *number - (*max - *min)
				 << ' '
				 << *max - *number;
			break;
		}
}