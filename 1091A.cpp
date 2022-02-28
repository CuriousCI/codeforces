#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t yellow, blue, red;
	cin >> yellow >> blue >> red;

	auto base = min({yellow, int16_t(blue - 1), int16_t(red - 2)});
	cout << (base >= 0 ? base * 3 + 3 : 0);
}