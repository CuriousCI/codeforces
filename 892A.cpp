#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size, volume, cola, remaining = 0;

	cin >> size;

	for (auto _ = 0; _ < size; _++)
	{
		cin >> cola;
		remaining += cola;
	}

	vector<uint64_t> volumes(size);
	for (auto &volume : volumes)
		cin >> volume;

	sort(volumes.begin(), volumes.end());

	cout << (remaining <= volumes.back() + volumes[volumes.size() - 2] ? "YES" : "NO");
}