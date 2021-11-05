#include <iostream>
#include <ranges>
#include <string>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size;
	cin >> size;
	vector<uint64_t> spheres(size);
	for (auto &sphere : spheres)
		cin >> sphere;

	cout << (size < 3 ? 0 : (size - 2 + (size & 1)) / 2) << endl;

	auto half = (size + 2 - (size & 1)) / 2 - 1,
		 beginning = (uint64_t)0,
		 start = half;

	ranges::sort(spheres);
	for (; half < size; half++, beginning++)
		cout << spheres[half] << ' ' << (beginning < start ? to_string(spheres[beginning]) : " ") << ' ';
}