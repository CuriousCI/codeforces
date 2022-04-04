#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t number;
	cin >> number;

	vector<int32_t> ratings = {1200, 1400, 1600, 1900, 2100, 2300, 2400, 2600, 3000};
	for (auto rating : ratings)
		if (rating > number)
		{
			cout << rating;
			return 0;
		}
}