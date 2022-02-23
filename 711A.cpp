#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rows_count;
	cin >> rows_count;

	vector<string> bus(rows_count);
	for (auto &row : bus)
		cin >> row;

	bool seats_found = false;
	for (auto &row : bus)
	{
		if (seats_found)
			break;

		auto position = row.find("OO");
		if (position != string::npos)
		{
			seats_found = true;
			row[position] = row[position + 1] = '+';
		}
	}

	if (seats_found)
	{
		cout << "YES" << endl;
		for (auto row : bus)
			cout << row << endl;
	}
	else
		cout << "NO";
}