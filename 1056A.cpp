#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t stops_size, lines_size, line;
	map<uint16_t, uint16_t> lines;

	cin >> stops_size;
	for (auto _ = 0; _ < stops_size; _++)
	{
		cin >> lines_size;
		while (lines_size--)
		{
			cin >> line;
			lines[line]++;
		}
	}

	for (auto line : lines)
		if (line.second == stops_size)
			cout << line.first << ' ';
}