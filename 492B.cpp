#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size, length;

	cin >> size >> length;
	vector<uint32_t> lanterns(size);

	for (auto &lantern : lanterns)
		cin >> lantern;
	sort(lanterns.begin(), lanterns.end());

	double distance = lanterns[0] * 2;
	for (size_t lantern = 1; lantern < size; lantern++)
		distance = max(distance, (double)lanterns[lantern] - lanterns[lantern - 1]);
	distance = max(distance, (length - lanterns.back()) * 2.0);

	cout << std::fixed << distance / 2;
}