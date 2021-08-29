#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t sets, carriable;
	cin >> sets >> carriable;

	vector<int32_t> tvs(sets);
	for (auto &tv : tvs)
		cin >> tv;

	sort(tvs.begin(), tvs.end());
	int32_t amount = 0;
	for (size_t index = 0; index < carriable; index++)
		if (tvs[index] <= 0)
			amount += tvs[index] * -1;

	cout << amount;
}