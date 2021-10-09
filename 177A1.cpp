#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t side, sum = 0;
	cin >> side;
	vector<vector<uint16_t>> matrix(side);
	for (auto &row : matrix)
	{
		row = vector<uint16_t>(side);
		for (auto &cell : row)
			cin >> cell;
	}

	for (auto x = 0; x < side; x++)
		if (x != (side - 1) / 2)
			sum += matrix[x][x] + matrix[x][side - x - 1] + matrix[(side - 1) / 2][x] + matrix[x][(side - 1) / 2];
		else
			sum += matrix[x][x];

	cout << sum;
}