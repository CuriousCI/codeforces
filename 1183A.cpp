#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

uint32_t digits_sum(uint32_t number)
{
	uint32_t sum = 0;
	for (uint32_t _ = 0; _ < 5; _++)
	{
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t number;
	cin >> number;

	while (digits_sum(number) % 4)
		number++;

	cout << number;
}