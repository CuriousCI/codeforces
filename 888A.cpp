#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, extremums = 0;
	cin >> size;

	vector<uint16_t> elements(size);
	for (auto &element : elements)
		cin >> element;

	for (auto index = 1; index < size - 1; index++)
		if ((elements[index] > elements[index - 1] && elements[index] > elements[index + 1]) ||
			(elements[index] < elements[index - 1] && elements[index] < elements[index + 1]))
			extremums++;
	cout << extremums;
}