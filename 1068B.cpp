#include <iostream>
#include <cstdint>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t number, combinations = 0;

	cin >> number;

	for (uint64_t divisor = 1; divisor <= sqrt(number); divisor++)
		if (number % divisor == 0)
		{
			combinations++;
			if (number / divisor != divisor)
				combinations++;
		}

	cout << combinations;
}