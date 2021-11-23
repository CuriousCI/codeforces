#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t scores, score;
	set<uint64_t> distinct;
	cin >> scores;
	while (scores--)
	{
		cin >> score;
		if (score)
			distinct.insert(score);
	}

	cout << distinct.size();
}