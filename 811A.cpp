#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t vladik, valera;
	cin >> vladik >> valera;
	auto turn = 1;
	bool starter = true;
	while (true)
	{
		if (starter)
		{
			if (turn <= vladik)
				vladik -= turn;
			else
			{
				cout << "Vladik";
				break;
			}
		}
		else
		{
			if (turn <= valera)
				valera -= turn;
			else
			{
				cout << "Valera";
				break;
			}
		}
		turn++;
		starter = !starter;
	}
}