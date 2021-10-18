#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	float lemons, apples, pears;
	cin >> lemons >> apples >> pears;

	auto quantity = (uint32_t)min({
		lemons,
		floor(apples / 2),
		floor(pears / 4),
	});

	cout << quantity * 7;
}