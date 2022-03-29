#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t elements_number;
	cin >> elements_number;

	vector<uint64_t> elements(elements_number);
	for (auto &element : elements)
		cin >> element;

	ranges::sort(elements);

	uint64_t mex = 0;
	elements.front() = 1;
	for (uint64_t index = 1; index < elements_number; index++)
	{
		elements[index] = min(elements[index], elements[index - 1] + 1);
		mex = max(mex, elements[index]);
	}

	cout << (elements_number == 1 ? 2 : mex + 1);
}
