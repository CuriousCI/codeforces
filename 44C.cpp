#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t days, gardeners, start, end;
	cin >> days >> gardeners;

	vector<uint16_t> schedule(days);
	while (gardeners--)
	{
		cin >> start >> end;
		for (size_t day = start; day <= end; day++)
			schedule[day - 1]++;
	}

	bool ok = true;
	uint32_t number = 1;
	for (auto day : schedule)
	{
		if (day != 1)
		{
			cout << number << ' ' << day << endl;
			ok = false;
			break;
		}
		number++;
	}

	if (ok)
		cout << "OK";
}