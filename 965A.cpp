#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	double people, airplanes, sheet, pack;
	cin >> people >> airplanes >> sheet >> pack;

	auto sheets = people * ceil(airplanes / sheet);
	cout << (uint64_t)ceil(sheets / pack);
}