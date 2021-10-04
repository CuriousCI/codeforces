#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<string> heatmap(3);
	for (auto &row : heatmap)
		cin >> row;

	bool symmetric = true;
	for (auto x = 0; x < 3; x++)
		for (auto y = 0; y < 3; y++)
			if (heatmap[x][y] != heatmap[2 - x][2 - y])
			{
				symmetric = false;
				break;
			}

	cout << (symmetric ? "YES" : "NO");
}