#include <iostream>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t elements_number, threshold;
	cin >> elements_number >> threshold;

	vector<int64_t> elements(elements_number);
	for (auto &element : elements)
		cin >> element;

	ranges::sort(elements);

	if (threshold == 0)
		cout << (elements.front() > 1 ? 1 : -1);
	else if (threshold == 1 && elements_number == 1)
		cout << elements.front();
	else if (threshold == elements_number)
		cout << elements.back();
	else
		cout << (elements[threshold - 1] == elements[threshold % elements_number] ? -1 : elements[threshold - 1]);
}