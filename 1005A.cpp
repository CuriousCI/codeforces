#include <iostream>
#include <cstdint>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;

	cin >> size;
	vector<uint16_t> steps(size), stairs;
	for (auto &step : steps)
		cin >> step;

	for (auto step : steps)
		if (step == 1)
			stairs.push_back(1);
		else
			stairs.back()++;

	cout << stairs.size() << endl;
	for (auto stair : stairs)
		cout << stair << ' ';
}