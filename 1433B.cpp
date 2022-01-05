#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t places_count;
		cin >> places_count;
		vector<uint16_t> bookshelf(places_count);
		for (auto &place : bookshelf)
			cin >> place;

		uint64_t leftmost = 0, rightmost = places_count - 1;
		while (!bookshelf[leftmost])
			leftmost++;
		while (!bookshelf[rightmost])
			rightmost--;

		uint64_t zeros_count = 0;
		for (auto place = leftmost; place <= rightmost; place++)
			if (!bookshelf[place])
				zeros_count++;
		cout << zeros_count << endl;
	}
}