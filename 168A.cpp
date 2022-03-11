#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t
		citizens_number,
		wizards_number,
		percentage;

	cin >> citizens_number >> wizards_number >> percentage;
	int32_t min_required = ceil((double)(citizens_number * percentage) / 100.0);

	cout << max(min_required - wizards_number, 0);
}