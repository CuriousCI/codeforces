#include <iostream>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rows, columns;
	cin >> rows >> columns;

	vector<string> crossword(rows);
	for (auto &row : crossword)
		cin >> row;

	vector<string> copy(crossword);

	for (auto row = 0; row < rows; row++)
	{
		map<char, uint16_t> frequencies;

		for (auto column = 0; column < columns; column++)
			frequencies[crossword[row][column]]++;

		for (auto frequency : frequencies)
			if (frequency.second > 1)
				for (auto column = 0; column < columns; column++)
					if (copy[row][column] == frequency.first)
						copy[row][column] = ' ';
	}

	for (auto column = 0; column < columns; column++)
	{
		map<char, uint16_t> frequencies;

		for (auto row = 0; row < rows; row++)
			frequencies[crossword[row][column]]++;

		for (auto frequency : frequencies)
			if (frequency.second > 1)
				for (auto row = 0; row < rows; row++)
					if (copy[row][column] == frequency.first)
						copy[row][column] = ' ';
	}

	string solution;
	for (auto row = 0; row < rows; row++)
		for (auto column = 0; column < columns; column++)
			if (copy[row][column] != ' ')
				solution += copy[row][column];

	cout << solution;
}