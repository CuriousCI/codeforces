#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<uint32_t> sides(3);
	for (auto &side : sides)
		cin >> side;

	vector<double> lengths = {
		sqrt(sides[0] * sides[1] / sides[2]),
		sqrt(sides[1] * sides[2] / sides[0]),
		sqrt(sides[2] * sides[0] / sides[1]),
	};

	auto sum = 0;
	for (auto length : lengths)
		sum += (uint32_t)length;

	cout << sum * 4;
}