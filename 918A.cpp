#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t name_length;
	cin >> name_length;

	set<uint16_t> fibonacci_numbers;
	auto left = 1, right = 1, total = 0;
	while (total <= name_length)
	{
		fibonacci_numbers.insert(left);
		fibonacci_numbers.insert(right);
		fibonacci_numbers.insert(total);

		total = left + right;
		left = right;
		right = total;
	}

	for (auto number = 1; number <= name_length; number++)
		cout << (fibonacci_numbers.contains(number) ? 'O' : 'o');
}