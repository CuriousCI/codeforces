#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	while (cases--)
	{
		int64_t start, end, station, radius;
		cin >> start >> end >> station >> radius;

		if (start > end)
		{
			auto temp = end;
			end = start;
			start = temp;
		}

		int64_t uncovered = 0;
		if (station - radius > start)
			uncovered += (station - radius) - start;
		if (station + radius < end)
			uncovered += end - (station + radius);

		cout << min(uncovered, end - start) << endl;
	}
}