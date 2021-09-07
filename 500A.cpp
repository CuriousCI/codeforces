#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cells, destination;
	cin >> cells >> destination;

	vector<uint32_t> integers(cells - 1);
	for (auto &integer : integers)
		cin >> integer;

	vector<uint32_t> portals(cells);
	for (uint32_t portal = 1; portal < cells; portal++)
		portals[portal] = portal + integers[portal - 1];

	vector<bool> visited(cells + 1, false);
	uint32_t position = 1;
	while (!visited[destination])
	{
		if (visited[position] || position > destination)
			break;
		visited[position] = true;
		position = portals[position];
	}

	cout << (visited[destination] ? "YES" : "NO");
}