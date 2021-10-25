#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length, questions, left, right;
	string song;

	cin >> length >> questions >> song;
	vector<uint64_t> prefixes(1, song.front() - 'a' + 1);
	for (auto index = 0; index < length; index++)
		prefixes.push_back(prefixes.back() + song[index] - 'a' + 1);
	while (questions--)
	{
		cin >> left >> right;
		cout << prefixes[right] - prefixes[left - 1] << endl;
	}
}