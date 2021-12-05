#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	vector<vector<int64_t>> lights(3);
	for (auto &row : lights)
	{
		row = vector<int64_t>(3);
		for (auto &light : row)
			cin >> light;
	}

	vector<vector<bool>> state(3);
	for (auto &row : state)
		row = vector<bool>(3, true);

	for (auto x = 0; x < 3; x++)
		for (auto y = 0; y < 3; y++)
			if (lights[y][x] & 1)
			{
				state[x][y] = !state[x][y];
				for (auto x_offset = -1; x_offset <= 1; x_offset++)
					if (x + x_offset >= 0 && x + x_offset < 3)
						state[x + x_offset][y] = !state[x + x_offset][y];
				for (auto y_offset = -1; y_offset <= 1; y_offset++)
					if (y + y_offset >= 0 && y + y_offset < 3)
						state[x][y + y_offset] = !state[x][y + y_offset];
			}

	for (auto x = 0; x < 3; x++)
	{
		for (auto y = 0; y < 3; y++)
			cout << (state[y][x] ? '1' : '0');
		cout << endl;
	}
}