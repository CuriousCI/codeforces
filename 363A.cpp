#include <ranges>
#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;
	ranges::reverse(number);

	for (auto digit : number)
	{
		auto value = digit - '0';
		if (value < 5)
			cout << "O-|";
		else
		{
			cout << "-O|";
			value -= 5;
		}
		auto upper = 1;
		while (upper <= value)
		{
			cout << 'O';
			upper++;
		}

		cout << '-';

		while (upper < 5)
		{
			cout << 'O';
			upper++;
		}

		cout << endl;
	}
}