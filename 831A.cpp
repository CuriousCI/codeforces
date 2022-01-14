#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	vector<uint16_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	bool is_unimodal = true;

	uint16_t left = 0, right = size - 1;
	while (numbers[left] < numbers[left + 1] && left < size - 1)
		left++;

	while (numbers[right] < numbers[right - 1] && right > 0)
		right--;

	auto reference = numbers[left];
	for (auto center = left; center <= right && is_unimodal; center++)
		is_unimodal = numbers[center] == reference;

	cout << (is_unimodal || size == 1 ? "YES" : "NO");
}