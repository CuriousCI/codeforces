#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

vector<vector<uint64_t>> paths;
uint16_t matrix_size;

void find_paths()
{
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	cin >> matrix_size;

	vector<vector<uint64_t>> matrix(matrix_size);
	for (auto &row : matrix)
	{
		row = vector<uint64_t>(matrix_size);
		for (auto &cell : row)
			cin >> cell;
	}
}