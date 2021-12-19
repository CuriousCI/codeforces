#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases;
	cin >> cases;
	while (cases--)
	{
		uint64_t tracks_count;
		cin >> tracks_count;

		vector<uint64_t> tracks(tracks_count);
		uint64_t total = 0, modulo;
		for (auto &track : tracks)
		{
			cin >> track;
			total += track;
		}

		modulo = total % tracks_count;
		cout << (modulo * (tracks_count - modulo)) << endl;
	}
}