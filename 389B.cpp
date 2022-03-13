#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	vector<string> board(size);
	for (auto &row : board)
		cin >> row;

	for (auto y = 1; y < size - 1; y++)
		for (auto x = 1; x < size - 1; x++)
			if (
				board[y][x] == '#' &&
				board[y + 1][x] == '#' &&
				board[y][x + 1] == '#' &&
				board[y - 1][x] == '#' &&
				board[y][x - 1] == '#')
			{
				board[y][x] = 'X';
				board[y + 1][x] = 'X';
				board[y][x + 1] = 'X';
				board[y - 1][x] = 'X';
				board[y][x - 1] = 'X';
			}

	bool complete = true;
	for (auto y = 0; y < size && complete; y++)
		for (auto x = 0; x < size && complete; x++)
			complete = board[y][x] != '#';

	cout << (complete ? "YES" : "NO");
}
