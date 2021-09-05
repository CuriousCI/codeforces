#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rides, cover, single, multiple;
	cin >> rides >> cover >> single >> multiple;

	cout << fixed
		 << (uint32_t)min({
				ceil((float)rides / cover) * multiple,
				(float)rides * single,
				floor((float)rides / cover) * multiple + single * (rides % cover),
			});
}