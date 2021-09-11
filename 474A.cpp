#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <map>

using namespace std;

string keys = " qwertyuiop asdfghjkl; zxcvbnm,./ ";
map<char, uint16_t> positions{
	{'q', 1},
	{'w', 2},
	{'e', 3},
	{'r', 4},
	{'t', 5},
	{'y', 6},
	{'u', 7},
	{'i', 8},
	{'o', 9},
	{'p', 10},
	{'a', 12},
	{'s', 13},
	{'d', 14},
	{'f', 15},
	{'g', 16},
	{'h', 17},
	{'j', 18},
	{'k', 19},
	{'l', 20},
	{';', 21},
	{'z', 23},
	{'x', 24},
	{'c', 25},
	{'v', 26},
	{'b', 27},
	{'n', 28},
	{'m', 29},
	{',', 30},
	{'.', 31},
	{'/', 32},
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	char shift;
	cin >> shift;

	int16_t move = (shift == 'R' ? -1 : 1);

	string text, result;
	cin >> text;

	for (auto letter : text)
	{
		char original = keys[positions[letter] + move];
		if (original != ' ')
			result += original;
	}

	cout << result;
}