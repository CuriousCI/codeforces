#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, queries, wire, bird;
	cin >> size;
	vector<uint16_t> lines(size);
	for (auto &line : lines)
		cin >> line;

	cin >> queries;
	for (auto index = 0; index < queries; index++)
	{
		cin >> wire >> bird;
		auto right = lines[wire - 1] - bird,
			 left = bird - 1;

		lines[wire - 1] = 0;
		if (wire >= 2)
			lines[wire - 2] += left;
		if (wire < lines.size())
			lines[wire] += right;
	}

	for (auto line : lines)
		cout << line << endl;
}