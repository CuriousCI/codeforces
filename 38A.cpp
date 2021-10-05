#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t ranks, current, desired, years = 0;
	cin >> ranks;

	vector<uint16_t> required(ranks - 1);
	for (auto &years : required)
		cin >> years;

	cin >> current >> desired;
	for (auto rank = max(current - 1, 0); rank <= desired - 2; rank++)
		years += required[rank];

	cout << years;
}