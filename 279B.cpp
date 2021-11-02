#include <iostream>
#include <ranges>
#include <vector>
#include <numeric>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size, time;
	cin >> size >> time;

	vector<uint64_t> books(size), times(size);
	for (auto &book : books)
		cin >> book;

	times.front() = reduce(books.begin(), books.end());

	for (auto index = 1; index < size; index++)
		times[index] = times[index - 1] - books[index - 1];

	auto readable = size;
	auto offset = 0;
	while (times[offset] > time)
		offset++;

	cout << readable - offset;
}