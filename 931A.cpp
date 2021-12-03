#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t left, right;
	cin >> left >> right;
	auto distance = abs(right - left);
	left = (distance - (distance & 1)) / 2;
	right = distance - left;

	auto tiredness = [](auto distance)
	{
		return (distance * (distance + 1)) / 2;
	};

	cout << tiredness(left) + tiredness(right);
}