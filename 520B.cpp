#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		initial_number,
		final_number;

	cin >> initial_number >> final_number;

	uint64_t operations = 0;
	while (initial_number < final_number)
	{
		initial_number *= 2;
		operations++;
	}

	operations += initial_number - final_number;
	cout << operations;
}