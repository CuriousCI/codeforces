#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t shares_count, rubles;
	cin >> shares_count >> rubles;

	vector<uint64_t> shares(shares_count);
	for (auto &share : shares)
		cin >> share;

	auto modulo = shares.front() % rubles;
	bool are_equalizable = true;
	for (auto share : shares)
	{
		are_equalizable = share % rubles == modulo;

		if (!are_equalizable)
			break;
	}

	if (!are_equalizable)
	{
		cout << -1;
		return 0;
	}

	uint64_t smallest_share = *ranges::min_element(shares), seconds = 0;
	for (auto share : shares)
		seconds += (share - smallest_share) / rubles;
	cout << seconds;
}