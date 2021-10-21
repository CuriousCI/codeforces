#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size, episode;

	cin >> size;
	vector<uint16_t> episodes(size, 0);
	while (size--)
	{
		cin >> episode;
		episodes[episode - 1]++;
	}

	for (auto index = 0; index < episodes.size(); index++)
		if (!episodes[index])
		{
			cout << index + 1;
			break;
		}
}