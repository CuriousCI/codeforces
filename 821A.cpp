#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<vector<uint32_t>> matrix(size);
	for (auto &row : matrix)
	{
		row = vector<uint32_t>(size);
		for (auto &item : row)
			cin >> item;
	}

	bool is_good = true;

	for (auto x = 0; x < size && is_good; x++)
		for (auto y = 0; y < size && is_good; y++)
		{
			bool found = matrix[y][x] == 1;
			for (auto left = 0; left < size && !found; left++)
				for (auto right = 0; right < size; right++)
					if (matrix[left][x] + matrix[y][right] == matrix[y][x])
						found = true;
			is_good = found;
		}

	cout << (is_good ? "Yes" : "No");
}