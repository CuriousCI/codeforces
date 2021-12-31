#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t pages;
	cin >> pages;

	vector<uint64_t> days(7);
	for (auto &day : days)
		cin >> day;

	uint64_t read_pages = 0, day = 0;
	while (read_pages < pages)
	{
		read_pages += days[day];
		day++;
		day = day % 7;
	}

	cout << (day ? day : 7);
}