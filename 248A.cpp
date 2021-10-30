#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cupboards, left = 0, right = 0, sx, dx;

	cin >> cupboards;
	for (auto _ = 0; _ < cupboards; _++)
	{
		cin >> sx >> dx;
		left += sx;
		right += dx;
	}

	cout << min((int)left, cupboards - left) + min((int)right, cupboards - right);
}