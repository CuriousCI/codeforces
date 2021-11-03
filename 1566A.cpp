#include <iostream>
#include <cstdint>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t size, sum;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> sum;
		auto median = (size + (size & 1)) >> 1;
		cout << sum / (size - median + 1) << endl;
	}
}