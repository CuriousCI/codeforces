#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Drift
{
	uint16_t y, x;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t drifts_number;
	cin >> drifts_number;

	vector<Drift> drifts(drifts_number);
	for (auto &drift : drifts)
		cin >> drift.x >> drift.y;

	vector
}