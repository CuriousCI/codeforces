#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t length;
	string game;

	cin >> length >> game;

	uint64_t
		left_positions = 0,
		right_positions = 0;

	while (game[left_positions] == '<')
		left_positions++;

	while (game[length - right_positions - 1] == '>')
		right_positions++;

	cout << left_positions + right_positions;
}