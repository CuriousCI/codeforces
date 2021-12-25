#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;

	uint64_t operations = 0;

	while (number.length() > 1)
	{
		uint64_t sum = 0;
		for (auto digit : number)
			sum += digit - '0';

		number = to_string(sum);
		operations++;
	}

	cout << operations;
}