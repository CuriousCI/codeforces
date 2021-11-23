#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	long double roubles, special_offer, free_bars, cost;
	cin >> cases;
	while (cases--)
	{
		cin >> roubles >> special_offer >> free_bars >> cost;
		cout << (uint64_t)(floor(floor(roubles / cost) / special_offer) * free_bars + floor(roubles / cost)) << endl;
	}
}