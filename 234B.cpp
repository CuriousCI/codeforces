#include <iostream>
#include <vector>
#include <fstream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	ifstream input("input.txt");
	ofstream output("output.txt");

	uint16_t trip, reading;
	input >> trip >> reading;

	vector<pair<uint16_t, uint16_t>> levels(trip);
	auto index = 1;
	for (auto &level : levels)
	{
		input >> level.first;
		level.second = index;
		index++;
	}

	sort(levels.begin(), levels.end());
	reverse(levels.begin(), levels.end());
	vector<uint16_t> indexes;

	output << levels[reading - 1].first << endl;
	for (auto hour = 0; hour < reading; hour++)
		indexes.push_back(levels[hour].second);

	sort(indexes.begin(), indexes.end());
	for (auto index : indexes)
		output << index << ' ';
}