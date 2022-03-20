#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string integer;
	cin >> integer;

	int64_t total_operations = integer == "0" ? 0 : 1;
	for (int64_t digit = integer.size() - 1; digit >= 0; digit--)
	{
		if (digit - 1 >= 0)
			total_operations += pow(10, digit - 1) integer[digit - 1] * 2;
	}

	cout << total_operations;
}