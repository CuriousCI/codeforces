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

	int16_t size;

	cin >> size;
	vector<int16_t> permutation(size);
	for (auto &number : permutation)
		cin >> number;

	auto minimun = 0, maximum = 0;
	for (auto index = 0; index < size; index++)
	{
		if (permutation[index] == 1)
			minimun = index;
		if (permutation[index] == size)
			maximum = index;
	}

	cout << max({
		abs(size - minimun - 1),
		abs(size - maximum - 1),
		abs(minimun - maximum),
		abs(0 - minimun),
		abs(0 - maximum),
	});
}