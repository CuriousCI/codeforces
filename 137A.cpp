#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string row;
	cin >> row;

	auto sequence = 0, trips = 0;
	auto type = row.front();

	for (auto item : row)
		if (type == item)
			sequence++;
		else
		{
			type = item;
			auto modulo = sequence % 5;
			trips += (sequence - modulo) / 5 + bool(modulo);
			sequence = 1;
		}

	auto modulo = sequence % 5;
	trips += (sequence - modulo) / 5 + bool(modulo);

	cout << trips;
}