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

	int64_t size, time;
	cin >> size >> time;

	vector<int64_t> books(size), times(size);
	for (auto &book : books)
		cin >> book;

	int64_t readable_books = 0;
	for (auto book : books)
	{
		if (time <= 0)
			break;

		if (book <= time)
		{
			time -= book;
			readable_books++;
		}
	}

	cout << readable_books;
}