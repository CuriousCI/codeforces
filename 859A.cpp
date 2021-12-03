#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t finalists_count, highest = 0, finalist;
	cin >> finalists_count;
	while (finalists_count--)
	{
		cin >> finalist;
		highest = max(finalist, highest);
	}

	cout << max((int64_t)0, highest - 25);
}