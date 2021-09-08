#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

bool possible(uint32_t length, uint32_t sum)
{
	return sum >= 0 && sum <= 9 * length;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length, total;
	cin >> length >> total;

	uint32_t sum = total;
	string smallest, biggest;
	for (uint32_t position = 0; position < length; position)
		for (uint16_t digit = 0; digit < 10; digit++)
			if ((position > 0 || digit > 0 || (length == 1 && digit == 0)) &&
				possible(length - position - 1, sum - digit))
			{
				smallest += '0' + digit;
				sum -= digit;
				break;
			}
	sum = total;
	for (uint32_t position = 0; position < length; position)
		for (uint16_t digit = 9; digit >= 0; digit--)
			if ((position > 0 || digit > 0 || (length == 1 && digit == 0)) &&
				possible(length - position - 1, sum - digit))
			{
				biggest += '0' + digit;
				sum -= digit;
				break;
			}

	cout << smallest << ' ' << biggest;
}