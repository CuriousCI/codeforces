#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t total_pages, offset, limit, multiplier, reread;
	cin >> total_pages >> offset >> limit >> multiplier >> reread;

	uint32_t page = 0, day = 0;

	while (page + min((uint32_t)(offset + multiplier * day), limit) - (page ? reread : 0) < total_pages)
	{
		page += min((uint32_t)(offset + multiplier * day), limit) - (page ? reread : 0);
		day++;
	}

	cout << day + 1;
}