#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint16_t size;
		cin >> size;

		vector<string> polygon(size);
		for (auto &row : polygon)
			cin >> row;

		vector<vector<bool>> valid(size);
		for (auto &row : valid)
			row = vector<bool>(size, false);

		for (auto y = 0; y < size; y++)
			for (auto x = 0; x < size; x++)
				if (polygon[y][x] == '0')
					valid[y][x] = true;
				else if (y == size - 1 || x == size - 1)
					valid[y][x] = true;
				else if (polygon[y][x + 1] == '1' || polygon[y + 1][x] == '1')
					valid[y][x] = true;

		bool is_valid = true;
		for (auto y = 0; y < size && is_valid; y++)
			for (auto x = 0; x < size && is_valid; x++)
				is_valid = valid[y][x];

		cout << (is_valid ? "YES" : "NO") << endl;
	}
}