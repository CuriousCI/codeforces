#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t words, delay, second, last, count = 1;
	cin >> words >> delay >> last;

	while (--words)
	{
		cin >> second;
		if (second - last <= delay)
			count++;
		else
			count = 1;

		last = second;
	}

	cout << count;
}