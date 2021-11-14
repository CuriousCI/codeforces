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

	int64_t found, max_value, card, total = 0;

	cin >> found >> max_value;
	while (found--)
	{
		cin >> card;
		total += card;
	}

	cout << (int64_t)ceil(abs(total) / (double)max_value);
}