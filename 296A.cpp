#include <iostream>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t elements_number;
	cin >> elements_number;

	vector<uint16_t> elements(elements_number);
	for (auto &element : elements)
		cin >> element;

	map<uint16_t, uint16_t> distinct_elements;
	for (auto element : elements)
		distinct_elements[element]++;

	bool obtainable = true;
	for (auto element : distinct_elements)
	{
		obtainable = element.second <= (elements_number / 2) + (elements_number & 1);
		if (!obtainable)
			break;
	}

	cout << (obtainable ? "YES" : "NO");
}